#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(pair<int, int>& a, pair<int, int>& b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 회의실 배정
    int N, start, end, cnt = 1;
    cin >> N;
    vector<pair<int, int>> v(N, { 0, 0 });

    for (int i = 0; i < N; i++)
    {
        cin >> start >> end;
        v[i] = make_pair(start, end);
    }

    sort(v.begin(), v.end(), cmp);

    int pivot = v[0].second;
    for (int i = 1; i < N; i++)
    {
        if (pivot <= v[i].first)
        {
            cnt++;
            pivot = v[i].second;
        }
    }

    cout << cnt;

    return 0;
}