#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, k;
int cnt;
vector<int> coins;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 동전 0
    cin >> n >> k;
    while (n--)
    {
        int a;
        cin >> a;
        coins.push_back(a);
    }

    for (int i = coins.size() - 1; i >= 0; i--)
    {
        if (coins[i] <= k)
        {
            cnt += k / coins[i];
            k -= (k / coins[i]) * coins[i];
        }

        if (k == 0)
            break;
    }
    cout << cnt;

    return 0;
}