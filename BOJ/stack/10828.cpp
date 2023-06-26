#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;

int N, num;
string ins;
stack<int> s;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 스택
    cin >> N;
    while (N--)
    {
        cin >> ins;
        if (ins == "push")
        {
            cin >> num;
            s.push(num);
        }
        else if (ins == "pop")
        {
            if (s.size() == 0)
            {
                cout << -1 << '\n';
                continue;
            }
            cout << s.top() << '\n';
            s.pop();
        }
        else if (ins == "size")
            cout << s.size() << '\n';
        else if (ins == "empty")
            cout << (s.empty() ? 1 : 0) << '\n';
        else if (ins == "top")
            cout << (s.size() == 0 ? -1 : s.top()) << '\n';
    }

    return 0;
}