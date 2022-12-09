#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 듣보잡
    int n, m;
    cin >> n >> m;
    int sum = n + m;
    string s;
    map<string, int> names;
    while (sum--)
    {
        cin >> s;
        if (names.count(s) > 0) names[s]++;
        else names.insert({ s, 1 });
    }

    vector<string> ret;
    for (const auto &it : names)
        if (it.second > 1) ret.push_back(it.first);

    cout << ret.size() << '\n';
    sort(ret.begin(), ret.end());
    for (const auto &it : ret) cout << it << '\n';
    return 0;
}