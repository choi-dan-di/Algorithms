#include <iostream>
#include <algorithm>
#include <queue>
#include <string>
using namespace std;

int N, num;
string ins;
queue<int> q;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 큐
    cin >> N;
    while (N--)
    {
        cin >> ins;
        if (ins == "push")
        {
            cin >> num;
            q.push(num);
        }
        else if (ins == "pop")
        {
            if (q.size() == 0)
            {
                cout << -1 << '\n';
                continue;
            }
            cout << q.front() << '\n';
            q.pop();
        }
        else if (ins == "size")
            cout << q.size() << '\n';
        else if (ins == "empty")
            cout << (q.empty() ? 1 : 0) << '\n';
        else if (ins == "front")
            cout << (q.size() == 0 ? -1 : q.front()) << '\n';
        else if (ins == "back")
            cout << (q.size() == 0 ? -1 : q.back()) << '\n';
    }

    return 0;
}