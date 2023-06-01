#include <iostream>
using namespace std;

int m, cnt;
int c[6] = { 500, 100, 50, 10, 5, 1 };

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 거스름돈
    cin >> m;
    int change = 1000 - m;
    for (int i = 0; i < 6; i++)
    {
        int temp = change / c[i];
        cnt += temp;
        change -= temp * c[i];
    }

    cout << cnt;

    return 0;
}