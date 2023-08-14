#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int n);

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 이항 계수 1
    int N, K;
    cin >> N >> K;

    cout << factorial(N) / (factorial(N - K) * factorial(K));

    return 0;
}

int factorial(int n)
{
    if (n == 1 || n == 0)
        return 1;

    return n * factorial(n - 1);
}