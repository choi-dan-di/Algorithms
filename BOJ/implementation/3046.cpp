#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // R2
    int R1, S;
    cin >> R1 >> S;

    // S = (R1+R2)/2
    // R2 = 2S - R1
    cout << 2 * S - R1;

    return 0;
}