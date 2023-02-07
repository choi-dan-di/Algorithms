#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <thread>
using namespace std;

// 힙 정렬과 병합 정렬

// 힙 정렬
void HeapSort(vector<int>& v)
{
    priority_queue<int, vector<int>, greater<int>> pq;

    // O(Nlog N)
    for (int num : v)
        pq.push(num);

    v.clear();

    // O(Nlog N)
    while (!pq.empty())
    {
        v.push_back(pq.top());
        pq.pop();
    }

    cout << "HeapSort : ";
    for (int i : v)
        cout << i << " ";
    cout << endl;

    // 2Nlog N => 결과적으로 O(Nlog N)
}

// 병합 정렬
// 분할 정복 (Divide and Conquer)
// - 분할 (Divide) : 문제를 더 단순하게 분할
// - 정복 (Conquer) : 분할된 문제를 해결
// - 결합 (Combine) : 결과를 취합하여 마무리

// 예시 풀어보기
// 정렬된 두 배열을 정렬된 채로 합치는 함수 만들어보기
vector<int> Merge(vector<int> a, vector<int> b)
{
    vector<int> temp;

    int leftIdx = 0;
    int rightIdx = 0;

    while (leftIdx < a.size() && rightIdx < b.size())
    {
        if (a[leftIdx] >= b[rightIdx])
        {
            temp.push_back(b[rightIdx]);
            rightIdx++;
        }
        else
        {
            temp.push_back(a[leftIdx]);
            leftIdx++;
        }
    }

    if (leftIdx >= a.size())
    {
        while (rightIdx < b.size())
        {
            temp.push_back(b[rightIdx]);
            rightIdx++;
        }
    }
    else
    {
        while (leftIdx < a.size())
        {
            temp.push_back(a[leftIdx]);
            leftIdx++;
        }
    }

    return temp;
}

// O(Nlog N)
void MergeResult(vector<int>& v, int left, int mid, int right)
{
    cout << "MR(" << left << ", " << mid << ", " << right << ")" << endl;
    int leftIdx = left;
    int rightIdx = mid + 1;

    vector<int> temp;
    while (leftIdx <= mid && rightIdx <= right)
    {
        if (v[leftIdx] <= v[rightIdx])
        {
            temp.push_back(v[leftIdx]);
            leftIdx++;
        }
        else
        {
            temp.push_back(v[rightIdx]);
            rightIdx++;
        }
    }

    // 왼쪽이 먼저 끝났으면 오른쪽 나머지 데이터 복사
    if (leftIdx > mid)
    {
        while (rightIdx <= right)
        {
            temp.push_back(v[rightIdx]);
            rightIdx++;
        }
    }
    else
    {
        while (leftIdx <= mid)
        {
            temp.push_back(v[leftIdx]);
            leftIdx++;
        }
    }

    for (int i = 0; i < temp.size(); i++)
        v[left + i] = temp[i];
}

void MergeSort(vector<int>& v, int left, int right)
{
    cout << "Now MS(" << left << ", " << right << ")" << endl;
    if (left >= right)
    {
        cout << "Return MS(" << left << ", " << right << ")" << endl;
        return;
    }

    int mid = (left + right) / 2;
    MergeSort(v, left, mid);
    MergeSort(v, mid + 1, right);

    MergeResult(v, left, mid, right);
}

int main()
{
    vector<int> v{ 1, 5, 3, 2, 4, 6, 8, 7 };
    /*
    vector<int> v;
    
    srand(time(0));
    for (int i = 0; i < 50; i++)
    {
        int randValue = rand() % 100;
        v.push_back(randValue);
    }
    */

    // HeapSort(v);
    cout << "--------------------------------\n";
    MergeSort(v, 0, v.size() - 1);

    cout << "MergeSort : ";
    for (int i : v)
        cout << i << " ";
    cout << endl;
    cout << "--------------------------------\n";

    // 적용 문제
    vector<int> a{ 1, 3, 5, 7 };
    vector<int> b{ 2, 4, 6, 8 };
    vector<int> result = Merge(a, b);
    cout << "Merge Result" << endl;
    for (int num : result)
        cout << num << " ";
    cout << endl;
}