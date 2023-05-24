#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 곱셈
    int a, b;
    int sum = 0;
    cin >> a >> b;
    int count = 0;
    while (b > 0)
    {
        int n = a * (b % 10);
        sum +=  n * pow(10, count++);
        b /= 10;
        cout << n << '\n';
    }
    cout << sum;

    return 0;
}