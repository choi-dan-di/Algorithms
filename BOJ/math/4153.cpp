#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 직각삼각형
    long long a, b, c;
    while (true)
    {
        cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0)
            break;

        // 피타고라스 정리
        // a^2 + b^2 = (a + b)^2 - 2ab
        // 2ab = 2abc/c(longEdge)
        long long longEdge = max(c, max(a, b));
        long long othersSum = (a + b + c) - longEdge;
        long long othersMul2 = 2 * (a * b * c) / longEdge;

        if (longEdge * longEdge == (othersSum * othersSum) - othersMul2)
            cout << "right\n";
        else
            cout << "wrong\n";
    }

    return 0;
}