#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 합 구하기
    int N, M;
    cin >> N;
    int* arr = new int[N + 1] { 0, };
    int* sum = new int[N + 1] { 0, };

    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
        sum[i] = sum[i - 1] + arr[i];
    }

    cin >> M;
    while (M--)
    {
        int i, j;
        cin >> i >> j;
        cout << sum[j] - sum[i - 1] << '\n';
    }

    delete[] arr;

    return 0;
}