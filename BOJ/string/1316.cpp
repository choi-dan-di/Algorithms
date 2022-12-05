#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string s;
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 그룹 단어 체커
    int ret = 0;
    cin >> s;
    int n = stoi(s);
    while (n--)
    {
        cin >> s;
        bool isTrue = true;
        string cs = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (cs.find(s[i]) == string::npos) 
            {
                cs += s[i];
                continue;
            }
            if (cs.back() != s[i])
            {
                isTrue = false;
                break;
            }
        }
        if (isTrue) ret++;
    }
    cout << ret;
    return 0;
}