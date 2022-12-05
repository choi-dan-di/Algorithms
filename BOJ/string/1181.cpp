#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> v;
vector<string>::iterator it;
bool cmp(string a, string b)
{
    if (a.size() == b.size()) return a < b;
    return a.size() < b.size();
}
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 단어 정렬
    string s;
    cin >> s;
    int n = stoi(s);
    while (n--)
    {
        cin >> s;
        it = find(v.begin(), v.end(), s);
        if (it != v.end()) continue;
        v.push_back(s);
    }
    sort(v.begin(), v.end(), cmp);
    for (const string &cs : v) cout << cs << '\n';
    return 0;
}