#include <iostream>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 영화감독 숌
    int N;
    cin >> N;

    int cnt = 0;
    for (int i = 666; i < INT_MAX; i++)
    {
        if (to_string(i).find("666") != string::npos)
            cnt++;
        if (cnt == N)
        {
            cout << i;
            break;
        }
    }

    return 0;
}