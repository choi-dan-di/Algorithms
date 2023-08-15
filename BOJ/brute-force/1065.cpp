#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 한수
    int N;
    cin >> N;

    int cnt = 0;
    for (int i = 1; i <= N; i++)
    {
        if (i < 100)
        {
            cnt++;
            continue;
        }

        // 100 이상의 수
        string str = to_string(i);
        int diff = (str[1] - '0') - (str[0] - '0');
        for (int j = 1; j < str.size() - 1; j++)
        {
            int nowDiff = (str[j + 1] - '0') - (str[j] - '0');
            if (nowDiff != diff)
                continue;
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}