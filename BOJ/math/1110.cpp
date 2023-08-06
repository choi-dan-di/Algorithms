#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 더하기 사이클
    int N;
    cin >> N;

    int ret = (N / 10) + (N % 10);
    int newNum = (N % 10) * 10 + (ret >= 10 ? ret - 10 : ret);
    int cnt = 1;
    while (true)
    {
        if (newNum == N)
            break;

        ret = (newNum / 10) + (newNum % 10);
        newNum = (newNum % 10) * 10 + (ret >= 10 ? ret - 10 : ret);
        cnt++;
    }

    cout << cnt;

    return 0;
}