#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 2차원 배열의 합
    int n, m, k, i, j, x, y;
    cin >> n >> m;
    int arr[n][m];
    for (int a = 0; a < n; a++)
        for (int b = 0; b < m; b++)
            cin >> arr[a][b];

    cin >> k;
    while (k--)
    {
        long long sum = 0;
        cin >> i >> j >> x >> y;
        for (int a = i - 1; a < x; a++)
            for (int b = j - 1; b < y; b++)
                sum += arr[a][b];
        cout << sum << '\n';
    }
    return 0;
}