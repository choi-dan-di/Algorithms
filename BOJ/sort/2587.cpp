#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 대표값2
    vector<int> v;
    int num;
    for (int i = 0; i < 5; i++)
    {
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    cout << accumulate(v.begin(), v.end(), 0) / v.size() << '\n';
    cout << v[v.size() / 2];
    
    return 0;
}