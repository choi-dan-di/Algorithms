#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 검증수
    int ret = 0;
    for (int i = 0; i < 5; i++)
    {
        int num;
        cin >> num;
        ret += (num * num);
    }

    cout << ret % 10;

    return 0;
}