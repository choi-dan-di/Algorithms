#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 좌표 정렬하기
    int n, x, y;
    cin >> n;
    vector<pair<int, int>> v;
    while (n--)
    {
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    sort(v.begin(), v.end());

    for (auto i : v)
        cout << i.first << ' ' << i.second << '\n';

    return 0;
}