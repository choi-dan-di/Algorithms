#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 소수
    int M, N;
    cin >> M >> N;

    vector<int> factor;
    for (int i = M; i <= N; i++)
    {
        bool hasFactor = false;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                hasFactor = true;
                break;
            }
        }

        if (!hasFactor && i > 1)
            factor.push_back(i);
    }

    if (factor.size() > 0)
        cout << accumulate(factor.begin(), factor.end(), 0) << '\n' << factor[0];
    else
        cout << "-1";

    return 0;
}