#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 팰린드롬수
    while (true)
    {
        string s;
        cin >> s;
        
        if (s == "0")
            break;

        bool isEnd = true;
        for (int i = 0; i < s.size() / 2; i++)
        {
            if (s[i] != s[s.size() - 1 - i])
            {
                isEnd = false;
                break;
            }
        }

        if (isEnd)
            cout << "yes\n";
        else
            cout << "no\n";
    }

    return 0;
}