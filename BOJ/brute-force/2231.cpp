#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 분해합
    int N, ret = 0;
    cin >> N;
    for (int i = 1; i < N; i++)
    {
        string s = to_string(i);
        int digitSum = 0;
        for (int j = 0; j < s.size(); j++)
            digitSum += s[j] - '0';

        if (i + digitSum == N)
        {
            ret = i;
            break;
        }
    }

    cout << ret;

    return 0;
}