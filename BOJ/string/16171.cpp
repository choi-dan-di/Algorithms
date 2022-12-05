#include <iostream>
#include <string>
#include <regex>
using namespace std;
string s, k;
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 나는 친구가 적다 (Small)
    cin >> s >> k;
    s = regex_replace(s, regex("[0-9]"), "");
    if(strstr(s.c_str(), k.c_str())) cout << "1";
    else cout << "0";
    return 0;
}