#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> ret;
string vowels = "aeiou";
void Solution(vector<string> &ret, string s)
{
    bool b1 = false;
    bool b2 = true;
    bool b3 = false;
    string eo = "eo";

    for (int i = 0; i < s.size(); i++)
    {
        if (vowels.find(s[i]) != string::npos)
        {
            b1 = true;
            break;
        }
    }

    if (s.size() >= 3)
    {
        for (int i = 0; i + 2 < s.size(); i++)
        {
            int a = vowels.find(s[i]);
            int b = vowels.find(s[i + 1]);
            int c = vowels.find(s[i + 2]);
            if ((a != string::npos && b != string::npos && c != string::npos) || (a == string::npos && b == string::npos && c == string::npos))
            {
                b2 = false;
                break;
            }
        }
    } 
    
    if (s.size() >= 2)
    {
        for (int i = 0; i + 1 < s.size(); i++)
        {
            if (s[i] == s[i + 1] && s[i] != 'e' && s[i] != 'o')
            {
                b3 = true;
                break;
            }
        }
    }

    string str = "<" + s + "> is ";
    if (b1 && b2 && !b3)
        str += "acceptable.";
    else
        str += "not acceptable.";
    ret.push_back(str);
}
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 비밀번호 발음하기
    string s;
    while (cin >> s)
    {
        if (s == "end") break;
        Solution(ret, s);
    }
    for (const auto &it : ret) cout << it << '\n';
    return 0;
}