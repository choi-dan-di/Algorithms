#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 문자열
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << s[0] << s[s.size() - 1] << '\n';
    }

    return 0;
}