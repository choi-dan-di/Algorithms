#include <iostream>
#include <algorithm>
using namespace std;

int X, depth;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 벌집
    cin >> X;

    int temp = 1;
    int i = 0;
    while (true)
    {
        temp += i;
        if (temp >= X)
            break;
        i += 6;
        ++depth;
    }

    cout << depth + 1;

    return 0;
}