#include <bits/stdc++.h>
using namespace std;

int cache[21];
int Fibonacci(int n)
{
    int& ret = cache[n];
    if (n <= 0)
        ret = 0;

    if (n == 1)
        ret = 1;

    if (ret != -1)
        return ret;

    return ret = Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 피보나치 수
    ::memset(cache, -1, sizeof(cache));
    int n;
    cin >> n;
    cout << Fibonacci(n);
    return 0;
}