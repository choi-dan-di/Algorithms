#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 별 찍기 - 6
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++)
    {
        // 공백
        for (int j = 0; j < i; j++)
            cout << ' ';

        // 별
        for (int j = i; j < 2 * N - i - 1; j++)
            cout << '*';

        cout << '\n';
    }

    return 0;
}