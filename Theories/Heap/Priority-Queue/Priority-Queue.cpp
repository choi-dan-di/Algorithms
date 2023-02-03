#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
using namespace std;

// Priority Queue

template<typename T, typename Container = vector<T>, typename Predicate = less<T>>
class PriorityQueue
{
public:
	void push(const T& data)
	{
		// 우선 힙 구조부터 맞춰주기
		_heap.push_back(data);

		// 대소 비교하며 정리하기
		int now = static_cast<int>(_heap.size()) - 1;	// 방금 넣은 데이터의 인덱스
		// 루트 노드까지 반복
		while (now > 0)
		{
			// 부모 노드와 비교해서 더 작으면 패배
			int parent = (now - 1) / 2;
			if (_predicate(_heap[now], _heap[parent]))
				break;

			// 데이터 교체
			::swap(_heap[now], _heap[parent]);
			now = parent;
		}
	}

	void pop()
	{
		// 최상위 노드 제거 + 최하위 노드를 최상위로 올리기
		_heap[0] = _heap.back();
		_heap.pop_back();

		// 최상위 노드부터 시작
		int now = 0;
		while (true)
		{
			int left = (2 * now) + 1;
			int right = (2 * now) + 2;

			// 리프에 도달한 경우
			if (left >= _heap.size())
				break;

			int child = now;

			// 왼쪽과 비교
			if (_predicate(_heap[child], _heap[left]))
				child = left;

			// 둘 중 승자를 오른쪽과 비교
			if (right < _heap.size() && _predicate(_heap[child], _heap[right]))
				child = right;

			// 왼쪽/오른쪽 둘 다 현재 값보다 작으면 종료
			if (child == now)
				break;

			// 데이터 교체
			::swap(_heap[now], _heap[child]);
			now = child;
		}
	}

	T& top()
	{
		return _heap[0];
	}

	bool empty()
	{
		return _heap.empty();
	}
private:
	Container _heap = {};
	Predicate _predicate = {};
};

int main()
{
	// priority_queue<int, vector<int>, greater<int>> pq;	// 최소 힙(min heap)
	// priority_queue<int> pq;	// 최대 힙(max heap)
	PriorityQueue<int, vector<int>, greater<int>> pq;

	pq.push(100);
	pq.push(300);
	pq.push(200);
	pq.push(500);
	pq.push(400);

	while (!pq.empty())
	{
		int value = pq.top();
		pq.pop();

		cout << value << endl;
	}
}