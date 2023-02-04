#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include "Binary-Search-Tree.h"
using namespace std;

// 이진 탐색 트리

// 이진 탐색(Binary Searc)
// 상황) 배열에 데이터가 정렬되어 있다.
// [1][8][15][23][32][44][56][63][81][91]

// Q) 82라는 숫자가 배열에 있습니까?
// A) 
// - 순차적 탐색
//   - 시간 복잡도는 O(N)이 될 것이다. -> 비효율적
// - 대소 비교 (이진 탐색)
//   - 시간 복잡도는 O(log N)이 될 것이다. -> 효율적

// 정렬된 배열이기 때문에 이진 탐색 가능
// -- 배열의 단점
// --- 중간 삽입/삭제가 느리다. => 해결하기 위해 이진 탐색 "트리"를 만듦
// - 정렬된 연결 리스트로는 불가 (임의 접근 X)
vector<int> numbers;

void BinarySearch(int n)
{
    int left = 0;
    int right = (int)numbers.size() - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (n < numbers[mid])
            right = mid - 1;
        else if (n > numbers[mid])
            left = mid + 1;
        else
        {
            cout << "Found!" << endl;
            break;
        }
    }
}

int main()
{
    numbers = vector<int>{ 1, 8, 15, 23, 32, 44, 56, 63, 81, 91 };
    BinarySearch(82);

    BinarySearchTree bst;
    bst.Insert(20);
    bst.Insert(10);
    bst.Insert(30);
    bst.Insert(25);
    bst.Insert(26);
    bst.Insert(40);
    bst.Insert(50);
    bst.Insert(9);
    bst.Insert(11);

    bst.Delete(10);

    bst.Print();
    //bst.Delete(26);

}