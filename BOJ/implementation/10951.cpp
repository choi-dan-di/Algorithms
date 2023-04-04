#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // A+B - 4
    int a, b;
    while (true)
    {
        cin >> a >> b;
        if (a && b)
        {
            cout << a + b << '\n';
            a = 0;
            b = 0;
        }
        else
            break;
    }
    return 0;
}