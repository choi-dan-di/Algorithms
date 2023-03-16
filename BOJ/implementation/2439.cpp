#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 별 찍기 - 2
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
            cout << ' ';
        for (int j = 0; j <= i; j++)
            cout << "*";
        cout << '\n';
    }

    return 0;
}