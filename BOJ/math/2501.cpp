#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 약수 구하기
    int N, K;
    vector<int> factor;

    cin >> N >> K;

    for (int i = 1; i <= N; ++i)
        if (N % i == 0)
            factor.push_back(i);

    if (factor.size() < K)
        cout << 0;
    else
        cout << factor[K - 1];

    return 0;
}