#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // CCW
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    
    // 행렬식(벡터) 이용
    int val = ((x2 - x1) * (y3 - y1)) - ((x3 - x1) * (y2 - y1));

    if (val > 0)
        cout << 1;
    else if (val == 0)
        cout << 0;
    else if (val < 0)
        cout << -1;

    return 0;
}