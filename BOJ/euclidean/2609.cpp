#include <iostream>
#include <algorithm>
using namespace std;

// 최대공약수
int gcd(int a, int b);
// 최소공배수
int lcm(int a, int b);

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 최대공약수와 최소공배수
    int A, B;
    cin >> A >> B;

    cout << gcd(A, B) << '\n' << lcm(A, B);

    return 0;
}

int gcd(int a, int b)
{
    while (b > 0)
    {
        int c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}