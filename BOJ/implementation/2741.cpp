#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // N 찍기
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cout << i << '\n';

    return 0;
}