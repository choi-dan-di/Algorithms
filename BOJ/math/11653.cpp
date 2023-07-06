#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 소인수분해
    int N;
    cin >> N;

    if (N == 1)
        return 0;

    int div = 2;
    while (true)
    {
        if (N < div)
            break;

        if (N % div == 0)
        {
            cout << div << '\n';
            N /= div;
        }
        else
            div++;
    }

    return 0;
}