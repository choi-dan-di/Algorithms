#include <iostream>
#include <algorithm>
using namespace std;

int cache[41][2];
int fibonacci(int n, int type);

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 피보나치 함수
    cache[0][0] = cache[1][1] = 1;
    int T, N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        cout << fibonacci(N, 0) << ' ' << fibonacci(N, 1) << '\n';
    }
    
    return 0;
}

int fibonacci(int n, int type) {
    if (n == 0 || n == 1 || cache[n][type] > 0)
        return cache[n][type];

    return cache[n][type] = fibonacci(n - 1, type) + fibonacci(n - 2, type);
}