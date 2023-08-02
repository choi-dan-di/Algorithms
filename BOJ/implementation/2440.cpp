#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 별 찍기 - 3
    int N;
    cin >> N;

    for (int i = N; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
            cout << '*';
        cout << '\n';
    }

    return 0;
}