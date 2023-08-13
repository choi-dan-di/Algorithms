#include <iostream>
#include <algorithm>
#include <set>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 회사에 있는 사람
    set<string, greater<string>> s;
    int n;
    cin >> n;
    while (n--)
    {
        string str, state;
        cin >> str >> state;
        if (state == "enter")
            s.insert(str);
        else if (state == "leave")
            s.erase(str);
    }

    for (string str : s)
        cout << str << '\n';

    return 0;
}