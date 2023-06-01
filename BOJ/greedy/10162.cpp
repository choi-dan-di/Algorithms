#include <iostream>
using namespace std;

int t, cnt_a, cnt_b, cnt_c;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 전자레인지
    cin >> t;
    int a = 5 * 60;
    int b = 1 * 60;
    int c = 10;

    cnt_a = t / a;
    t -= (t / a) * a;
    cnt_b = t / b;
    t -= (t / b) * b;
    cnt_c = t / c;
    t -= (t / c) * c;

    if (t == 0)
        cout << cnt_a << ' ' << cnt_b << ' ' << cnt_c;
    else
        cout << -1;

    return 0;
}