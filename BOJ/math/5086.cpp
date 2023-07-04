#include <iostream>
#include <algorithm>
using namespace std;

int a, b;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 배수와 약수
    while (true)
    {
        cin >> a >> b;
        if (a == 0 && b == 0)
            break;

        if (a > b && a % b == 0)
            cout << "multiple\n";
        else if (a < b && b % a == 0 || a == b)
            cout << "factor\n";
        else
            cout << "neither\n";
    }

    return 0;
}