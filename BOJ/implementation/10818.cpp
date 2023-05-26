#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int min, max;
vector<int> v;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 최소, 최대
    cin >> n;
    while (n--)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    cout << v.front() << ' ' << v.back();

    return 0;
}