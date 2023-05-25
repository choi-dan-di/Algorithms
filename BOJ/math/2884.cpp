#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 알람 시계
    int H, M;
    cin >> H >> M;
    int h = H - 1;
    int m = M - 45;

    if (M - 45 >= 0) h++;
    else {
        m += 60;
        if (h < 0)
            h = 23;
    }

    cout << h << ' ' << m;

    return 0;
}