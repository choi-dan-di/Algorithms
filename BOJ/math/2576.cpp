#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 홀수
    int sum = 0;
    int minNum = 101;
    for (int i = 0; i < 7; i++)
    {
        int num;
        cin >> num;

        if (num % 2 == 1)
        {
            sum += num;
            minNum = min(minNum, num);
        }
    }

    if (sum == 0)
    {
        cout << -1;
        return 0;
    }

    cout << sum << '\n' << minNum;

    return 0;
}