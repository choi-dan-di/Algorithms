#include <iostream>
#include <algorithm>
using namespace std;

int cache[50];
int Fibonacci(int n);

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 피보나치 수
    cache[0] = 0;
    cache[1] = 1;

    int n;
    cin >> n;
    cout << Fibonacci(n);

    return 0;
}

int Fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;

    if (cache[n] > 0)
        return cache[n];

    return cache[n] = Fibonacci(n - 1) + Fibonacci(n - 2);
};