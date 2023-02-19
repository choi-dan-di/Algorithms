#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

vector<ll> cache;

ll Factorial(int n)
{
    ll& ret = cache[n];
    if (n == 1 || n <= 0)
        return 1;

    if (ret != -1)
        return ret;

    return ret = n * Factorial(n - 1);
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 팩토리얼
    cache = vector<ll>(101, -1);
    cache[0] = cache[1] = 1;
    int n;
    cin >> n;

    cout << Factorial(n);

    return 0;
}