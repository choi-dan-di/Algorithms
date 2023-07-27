#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

bool cmp(pair<int, string> a, pair<int, string> b)
{
    return (a.first < b.first ? true : false);
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 나이순 정렬
    int N;
    cin >> N;
    
    vector<pair<int, string>> v;
    while (N--)
    {
        int age;
        string name;
        cin >> age >> name;
        v.push_back(make_pair(age, name));
    }

    stable_sort(v.begin(), v.end(), cmp);

    for (auto i : v)
        cout << i.first << ' ' << i.second << '\n';

    return 0;
}