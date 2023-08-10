#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // ACM 호텔
    int T, H, W, N;
    cin >> T;
    while (T--)
    {
        cin >> H >> W >> N;
        // 층수 : N % H
        // 호수 : N / H + (나머지 있으면 + 1, 없으면 그대로)
        int floor = (N % H > 0 ? N % H : H);
        int roomNum = (N / H) + (N % H > 0 ? 1 : 0);
        cout << floor << (roomNum < 10 ? "0" : "") << roomNum << '\n';
    }

    return 0;
}