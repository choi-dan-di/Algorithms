#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 사분면 고르기
    int x, y;
    cin >> x >> y;
    if (x > 0)
        if (y > 0) cout << '1';
        else cout << '4';
    else
        if (y > 0) cout << '2';
        else cout << '3';
    return 0;
}