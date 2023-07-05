#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 소수 찾기
    int N = 0, cnt = 0;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        vector<int> factor;
        int num = 0;
        cin >> num;
        for (int i = 2; i <= num; ++i)
            if (num % i == 0)
                factor.push_back(i);

        if (factor.size() == 1)
            ++cnt;
    }

    cout << cnt;

    return 0;
}