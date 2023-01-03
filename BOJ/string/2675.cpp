#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 문자열 반복
    int t;
    cin >> t;
    while (t--)
    {
        int r;
        string s;
        cin >> r >> s;
        for (int i = 0; i < s.size(); i++)
        {
            int rr = r;
            while (rr--) cout << s[i];
        }
        cout << '\n';
    }
    return 0;
}