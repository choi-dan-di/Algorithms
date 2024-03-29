﻿#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
using namespace std;

// Queue (FIFO First-In-First-Out 선입선출)

// front << [1][2][3][4] << rear(back)

// 스택에 의해 활용 범위가 넓다.
// 활용
// - 대기열

// Queue 구현
// 1. 리스트 사용 방식
template<typename T>
class ListQueue
{
public:
    void push(const T& value)
    {
        _container.push_back(value);
    }

    void pop()
    {
        // 효율이 좋지 않다. (동적 배열에서의 앞 요소 추가 및 삭제)
        // _container.erase(_container.begin());
        // 리스트 사용
        _container.pop_front();
    }

    T& front()
    {
        return _container.front();
    }

    bool empty() { return _container.empty(); }
    int size() { return _container.size(); }
private:
    list<T> _container;
    // 덱(deque)을 사용해도 리스트와 비슷한 속도로 동작된다.(원래 코드는 덱으로 되어있음)
};

// 2. 배열 사용 방식
// front와 back으로 이정표를 만든다. (순환 방식)
template<typename T>
class ArrayQueue
{
public:
    ArrayQueue()
    {
        // _container.resize(100);
    }

    void push(const T& value)
    {
        if (_size == _container.size())
        {
            // 증설 작업
            int newSize = max(1, _size * 2);    // 둘 중 큰 값을 리턴
            vector<T> newData;
            newData.resize(newSize);
            
            // 데이터 복사
            for (int i = 0; i < _size; i++)
            {
                int index = (_front + i) % _container.size();
                newData[i] = _container[index];
            }

            _container.swap(newData);
            _front = 0;
            _back = _size;
        }

        _container[_back] = value;
        _back = (_back + 1) % _container.size();
        _size++;
    }

    void pop()
    {
        _front = (_front + 1) % _container.size();
        _size--;
    }

    T& front()
    {
        return _container[_front];
    }

    bool empty() { return _size == 0; }
    int size() { return _size; }
private:
    vector<T>   _container;

    int         _front = 0;
    int         _back = 0;
    int         _size = 0;
};


int main()
{
    // ListQueue<int> q;
    ArrayQueue<int> q;

    // 삽입
    for (int i = 0; i < 100; i++)
        q.push(i);

    // 비었는지 확인
    while (q.empty() == false)
    {
        // 가장 먼저 들어간 데이터
        int value = q.front();
        // 가장 먼저 들어간 데이터 삭제
        q.pop();
        cout << value << endl;
    }

    // 큐 사이즈
    int size = q.size();
}