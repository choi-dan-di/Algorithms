#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 손익분기점
    int A, B, C;
    cin >> A >> B >> C;

    // 가변비용이 판매비용보다 크거나 같으면 손익분기점을 넘을 수 없음
    if (C - B <= 0)
    {
        cout << -1;
        return 0;
    }

    cout << A / (C - B) + 1;

    return 0;
}