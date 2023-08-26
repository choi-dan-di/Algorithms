#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 수들의 합 2
    int N, M;
    int arr[10001] = { 0, };
    int sumArr[10001] = { 0, };
    cin >> N >> M;
    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
        sumArr[i] = sumArr[i - 1] + arr[i];
    }

    int cnt = 0;
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= N; j++)
            if (sumArr[j] - sumArr[i - 1] == M)
                cnt++;

    cout << cnt;   

    return 0;
}