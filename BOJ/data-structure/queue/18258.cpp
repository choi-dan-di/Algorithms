#include <iostream>
#include <algorithm>
#include <queue>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 큐 2
    int n;
    queue<string> q;
    cin >> n;

    cin.ignore();
    while (n--)
    {
        string str = "";
        getline(cin, str);
        if (str.find("push") != string::npos)
            q.push(str.substr(str.find(" ") + 1));
        else if (str.find("pop") != string::npos)
        {
            if (q.size() > 0)
            {
                cout << q.front() << '\n';
                q.pop();
            }
            else
                cout << -1 << '\n';
        }
        else if (str.find("size") != string::npos)
            cout << q.size() << '\n';
        else if (str.find("empty") != string::npos)
            cout << (q.empty() ? 1 : 0) << '\n';
        else if (str.find("front") != string::npos)
            cout << (q.size() > 0 ? q.front() : "-1") << '\n';
        else if (str.find("back") != string::npos)
            cout << (q.size() > 0 ? q.back() : "-1") << '\n';
    }

    return 0;
}