#include <iostream>
#include <algorithm>
using namespace std;

int f[41];
int fib(int n);
int fibonacci(int n);

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 알고리즘 수업 - 피보나치 수 1
    int n;
    cin >> n;
    cout << fib(n) << ' ' << fibonacci(n);
    
    return 0;
}

// 재귀호출
int fib(int n)
{
    if (n == 1 || n == 2)
        return 1;   // 코드 1
    else
        return fib(n - 1) + fib(n - 2);
}

// 동적 프로그래밍
int fibonacci(int n)
{
    int cnt = 0;
    f[1] = f[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2]; // 코드 2
        cnt++;
    }
    return cnt;
}
