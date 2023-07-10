#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 네 번째 점
    int x, y;
    map<int, int> mx;
    map<int, int> my;
    for (int i = 0; i < 3; i++)
    {
        cin >> x >> y;
        mx[x]++;
        my[y]++;
    }

    for (auto it : mx)
        if (it.second == 1)
            cout << it.first;

    cout << ' ';

    for (auto it : my)
        if (it.second == 1)
            cout << it.first;
    
    return 0;
}