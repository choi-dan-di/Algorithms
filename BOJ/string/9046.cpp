#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
using namespace std;
#define PCI pair<char, int>
int T;
string s;
vector<char> ret;
bool cmp(const PCI& a, const PCI& b)
{
    return a.second > b.second;
}
int main()
{
    // 복호화
    cin >> T;
    cin.ignore();
    for (int i = 0; i < T; i++)
    {
        getline(cin, s);
        map<char, int> m;
        int cnt = 0;
        while (s[cnt])
        {
            if (s[cnt] == ' ')
            {
                cnt++;
                continue;
            }
            if (m.count(s[cnt]) > 0)
                m[s[cnt]]++;
            else 
                m.insert({ s[cnt], 1 });
            cnt++;
        }
        vector<PCI> vec(m.begin(), m.end());
        sort(vec.begin(), vec.end(), cmp);
        if (vec.size() == 1)
            ret.push_back(vec[0].first);
        else
        {
            if (vec[0].second == vec[1].second)
                ret.push_back('?');
            else
                ret.push_back(vec[0].first);
        }
    }
    for (auto it : ret) cout << it << '\n';
    return 0;
}