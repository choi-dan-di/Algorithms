#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> v;
string ret;
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 세로읽기
    int maxLen = 0;
    for (int i = 0; i < 5; i++)
    {
        string s;
        cin >> s;
        if (maxLen < s.size()) maxLen = s.size();
        v.push_back(s);
    }
    for (int i = 0; i < maxLen; i++)
        for (int j = 0; j < 5; j++)
            if (v[j][i]) ret += v[j][i];
    cout << ret;
    return 0;
}