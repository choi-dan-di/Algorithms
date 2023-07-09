#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 삼각형과 세 변
    int a, b, c;
    while (true)
    {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0)
            break;

        int max_num = max(max(a, b), c);

        if (a + b + c - max_num <= max_num)
        {
            cout << "Invalid\n";
            continue;
        }

        if (a == b && b == c)
            cout << "Equilateral\n";
        else if (a != b && b != c && c != a)
            cout << "Scalene\n";
        else if (a == b || b == c || c == a)
            cout << "Isosceles\n";
    }

    return 0;
}