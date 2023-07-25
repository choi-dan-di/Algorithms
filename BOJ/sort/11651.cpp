#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 좌표 정렬하기 2
    int N, x, y;
    cin >> N;
    vector<pair<int, int>> v;

    while (N--)
    {
        cin >> x >> y;
        v.push_back(make_pair(y, x));
    }

    sort(v.begin(), v.end());

    for (auto i : v)
        cout << i.second << ' ' << i.first << '\n';

    return 0;
}