#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // A + B - 3
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << a + b << '\n';
    }

    return 0;
}