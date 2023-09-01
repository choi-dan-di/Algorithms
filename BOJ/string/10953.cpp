#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // A + B - 6
    int T;
    cin >> T;

    while (T--)
    {
        string S;
        cin >> S;
        cout << (S[0] - '0') + (S[2] - '0') << '\n';
    }

    return 0;
}