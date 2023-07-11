#include <iostream>
#include <algorithm>
using namespace std;

int cache[15][15];
int caching(int floor, int n);

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 부녀회장이 될테야
    for (int i = 0; i < 15; i++)
        cache[0][i] = i;

    for (int i = 1; i < 15; i++)
        caching(i - 1, 14);

    int T, k, n;
    cin >> T;
    while (T--)
    {
        cin >> k >> n;
        cout << cache[k][n] << '\n';
    }
    
    return 0;
}

int caching(int floor, int n)
{
    if (n == 0 || n == 1)
        return cache[floor + 1][n] = n;

    if (floor > 0 && cache[floor + 1][n] > 0)
        return cache[floor + 1][n];

    return cache[floor + 1][n] = cache[floor][n] + caching(floor, n - 1);
}