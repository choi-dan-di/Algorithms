#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string S, T;
int result;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // A와 B
    cin >> S >> T;

    while (true)
    {
        if (S == T)
        {
            result = 1;
            break;
        }

        if (T.size() == 0)
            break;

        string end_char = T.substr(T.size() - 1);
        T = T.substr(0, T.size() - 1);
        if (end_char == "B")
            reverse(T.begin(), T.end());
    }

    cout << result;

    return 0;
}