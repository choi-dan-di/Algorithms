#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 기찍 N
    int n;
    cin >> n;
    cout << n << '\n';
    while (n-- > 1)
        cout << n << '\n';

    return 0;
}