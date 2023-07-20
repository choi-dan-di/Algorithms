#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 균형잡힌 세상
    cin.ignore();
    while (true)
    {
        string str = "";
        getline(cin, str);
        stack<int> s;
        if (str == ".")
            break;

        for (int i = 0; i < str.size(); i++)
        {
            if (!isalpha(str[i]) && str[i] != ' ' && str[i] != '.')
            {
                if (str[i] == '(')
                    s.push(1);
                else if (str[i] == '[')
                    s.push(2);
                else if (str[i] == ')' || str[i] == ']')
                {
                    if (s.size() > 0)
                    {
                        int t = (str[i] == ')' ? -1 : -2);
                        if (s.top() + t == 0)
                            s.pop();
                        else
                            break;
                    }
                    else
                    {
                        s.push(0);
                        break;
                    }
                }
            }
        }

        if (s.size() == 0)
            cout << "yes\n";
        else
            cout << "no\n";
    }

    return 0;
}