#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 수열
    int N, K, num;
    cin >> N >> K;
    int* d = new int[N + 1] { 0, };
    for (int i = 1; i <= N; i++)
    {
        cin >> num;
        d[i] = d[i - 1] + num;
    }

    int maxTemp = -999;
    for (int i = K; i <= N; i++)
        maxTemp = max(maxTemp, d[i] - d[i - K]);

    cout << maxTemp;

    delete[] d;

    return 0;
}