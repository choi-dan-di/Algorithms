#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // A+B - 7
    int n, a, b;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        cout << "Case #" << i << ": " << a + b << '\n';
    }
    return 0;
}