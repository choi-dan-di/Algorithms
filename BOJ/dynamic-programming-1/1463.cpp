#include <iostream>
#include <algorithm>
using namespace std;

int n;
int cache[1000005] = { 0, 0, 1, 1 };

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 1로 만들기
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        cache[i] = cache[i - 1] + 1;
        if (i % 3 == 0)
            cache[i] = min(cache[i], cache[i / 3] + 1);
        if (i % 2 == 0)
            cache[i] = min(cache[i], cache[i / 2] + 1);
    }
    cout << cache[n];

    return 0;
}