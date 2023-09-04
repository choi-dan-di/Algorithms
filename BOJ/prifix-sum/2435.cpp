#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 기상청 인턴 신현수
    int N, K, temp;
    cin >> N >> K;
    int* sum = new int[N + 1] { 0, };

    for (int i = 1; i <= N; i++)
    {
        cin >> temp;
        sum[i] = sum[i - 1] + temp;
    }

    int maxTemp = -99999;
    for (int i = 0; i <= N - K; i++)
        maxTemp = max(sum[i + K] - sum[i], maxTemp);

    cout << maxTemp;

    return 0;
}