#include <iostream>
#include <algorithm>
using namespace std;

int cache[1001][3];

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // RGB거리
    int N, R, G, B;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> R >> G >> B;
        cache[i][0] = min(cache[i - 1][1], cache[i - 1][2]) + R;
        cache[i][1] = min(cache[i - 1][0], cache[i - 1][2]) + G;
        cache[i][2] = min(cache[i - 1][0], cache[i - 1][1]) + B;
    }

    cout << min(cache[N][2], min(cache[N][0], cache[N][1]));

    return 0;
}