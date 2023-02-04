#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include "Binary-Search-Tree.h"
using namespace std;

// ���� Ž�� Ʈ��

// ���� Ž��(Binary Searc)
// ��Ȳ) �迭�� �����Ͱ� ���ĵǾ� �ִ�.
// [1][8][15][23][32][44][56][63][81][91]

// Q) 82��� ���ڰ� �迭�� �ֽ��ϱ�?
// A) 
// - ������ Ž��
//   - �ð� ���⵵�� O(N)�� �� ���̴�. -> ��ȿ����
// - ��� �� (���� Ž��)
//   - �ð� ���⵵�� O(log N)�� �� ���̴�. -> ȿ����

// ���ĵ� �迭�̱� ������ ���� Ž�� ����
// -- �迭�� ����
// --- �߰� ����/������ ������. => �ذ��ϱ� ���� ���� Ž�� "Ʈ��"�� ����
// - ���ĵ� ���� ����Ʈ�δ� �Ұ� (���� ���� X)
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