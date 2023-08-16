#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 구간 합 구하기 4
    int N, M;
    cin >> N >> M;
    int* arr = new int[N + 1] { 0, };
    int* sumArr = new int[N + 1] { 0, };
    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
        sumArr[i] = sumArr[i - 1] + arr[i];
    }

    while (M--)
    {
        int i, j;
        cin >> i >> j;
        cout << sumArr[j] - sumArr[i - 1] << '\n';
    }

    delete[] arr;
    delete[] sumArr;

    return 0;
}