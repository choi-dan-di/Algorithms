#include <iostream>
#include <algorithm>
#include <deque>
#include <string>
using namespace std;

int N, num;
string ins;
deque<int> d;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 큐
    cin >> N;
    while (N--)
    {
        cin >> ins;
        if (ins == "push_front")
        {
            cin >> num;
            d.push_front(num);
        }
        else if (ins == "push_back")
        {
            cin >> num;
            d.push_back(num);
        }
        else if (ins == "pop_front")
        {
            if (d.size() == 0)
            {
                cout << -1 << '\n';
                continue;
            }
            cout << d.front() << '\n';
            d.pop_front();
        }
        else if (ins == "pop_back")
        {
            if (d.size() == 0)
            {
                cout << -1 << '\n';
                continue;
            }
            cout << d.back() << '\n';
            d.pop_back();
        }
        else if (ins == "size")
            cout << d.size() << '\n';
        else if (ins == "empty")
            cout << (d.empty() ? 1 : 0) << '\n';
        else if (ins == "front")
            cout << (d.size() == 0 ? -1 : d.front()) << '\n';
        else if (ins == "back")
            cout << (d.size() == 0 ? -1 : d.back()) << '\n';
    }

    return 0;
}