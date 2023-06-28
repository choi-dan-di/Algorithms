#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;

int T;
string ps;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 괄호
    cin >> T;

    while (T--)
    {
        cin >> ps;
        stack<char> s;
        for (int i = 0; i < ps.size(); ++i)
        {
            if (ps[i] == '(')
                s.push(ps[i]);
            else
            {
                if (s.size() == 0)
                {
                    s.push('N');
                    break;
                }
                
                s.pop();
            }
        }
        cout << (s.size() == 0 ? "YES" : "NO") << '\n';
    }

    return 0;
}