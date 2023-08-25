#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 블로그
    int N, X;
    cin >> N >> X;
    int* arr = new int[N + 1] { 0, };
    long long* sum = new long long[N + 1] { 0, };

    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
        sum[i] = sum[i - 1] + arr[i];
    }

    long long maxNum = -1;
    int cnt = 0;
    for (int i = X; i <= N; i++)
        maxNum = max(maxNum, sum[i] - sum[i - X]);

    for (int i = X; i <= N; i++)
        if (maxNum == sum[i] - sum[i - X])
            cnt++;

    if (maxNum == 0)
        cout << "SAD";
    else
        cout << maxNum << '\n' << cnt;

    delete[] arr;
    delete[] sum;

    return 0;
}