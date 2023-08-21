#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 별 찍기 - 5
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = N - i - 1; j > 0; j--)
            cout << ' ';
        for (int j = 0; j < 2 * i + 1; j++)
            cout << '*';
        cout << '\n';
    }

    return 0;
}