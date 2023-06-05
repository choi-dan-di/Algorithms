#include <iostream>
using namespace std;

int t;
int unit[4] = { 25, 10, 5, 1 };
int change[4] = { 0 };

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 세탁소 사장 동혁
    cin >> t;
    while (t--)
    {
        int c;
        cin >> c;

        for (int i = 0; i < 4; i++)
        {
            change[i] = c / unit[i];
            c -= change[i] * unit[i];
            cout << change[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}