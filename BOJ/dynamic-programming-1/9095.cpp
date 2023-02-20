#include <bits/stdc++.h>
using namespace std;

int T, n;
int cache[15];

int AddCount(int num)
{
    if (num < 0)
        return 0;
    if (num == 0)
        return 1;

    int& ret = cache[num];
    if (ret != -1)
        return ret;

    return ret = AddCount(num - 1) + AddCount(num - 2) + AddCount(num - 3);
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 1, 2, 3 더하기
    ::memset(cache, -1, sizeof(cache));

    cin >> T;
    while (T--)
    {
        cin >> n;
        cout << AddCount(n) << '\n';
    }

    return 0;
}