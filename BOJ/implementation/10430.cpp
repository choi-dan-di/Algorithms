#include <iostream>
using namespace std;

int a, b, c;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 나머지
    cin >> a >> b >> c;
    int retA, retB, retC;
    cout << (a + b) % c << '\n';
    cout << ((a % c) + (b % c)) % c << '\n';
    cout << (a * b) % c << '\n';
    cout << ((a % c) * (b % c)) % c;

    return 0;
}