#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 윤년
    int y = 0;
    int ret = 0;
    cin >> y;
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) ret = 1;
    cout << ret << '\n';
    return 0;
}