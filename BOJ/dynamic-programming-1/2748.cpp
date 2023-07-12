#include <iostream>
#include <algorithm>
using namespace std;

long long cache[91];
long long fibonacci(long long n);

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 피보나치 수 2
    long long n;
    cin >> n;
    cout << fibonacci(n);
    
    return 0;
}

long long fibonacci(long long n)
{
    if (n == 0 || n == 1)
        return n;

    if (cache[n] > 0)
        return cache[n];
    
    return cache[n] = fibonacci(n - 1) + fibonacci(n - 2);
}