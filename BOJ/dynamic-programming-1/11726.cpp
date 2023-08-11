#include <iostream>
#include <algorithm>
using namespace std;

int cache[1001];
int dp(int n);

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 2xn 타일링
    int n;
    cin >> n;
    cache[1] = 1;
    cache[2] = 2;

    cout << dp(n);

    return 0;
}

int dp(int n)
{
    if (n == 0)
        return 0;

    if (cache[n] > 0)
        return cache[n];

    return cache[n] = (dp(n - 1) + dp(n - 2)) % 10007;
}