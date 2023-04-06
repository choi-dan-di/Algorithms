#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 빠른 A+B
    int n, a, b;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        cout << a + b << '\n';
    }
    return 0;
}