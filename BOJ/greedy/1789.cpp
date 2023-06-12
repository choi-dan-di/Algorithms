#include <iostream>
using namespace std;

long long S, sum, n;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 수들의 합
    cin >> S;
    while (true)
    {
        if (S - sum <= n)
            break;
        sum += ++n;
    }

    cout << n;

    return 0;
}