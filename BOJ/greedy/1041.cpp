#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

long long N, sum;
int noon[6];

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 주사위
    cin >> N;
    for (int i = 0; i < 6; i++)
        cin >> noon[i];

    if (N == 1)
    {
        int max_one = *max_element(noon, noon + 6);
        int sum_one = accumulate(noon, noon + 6, 0, plus<int>());

        cout << sum_one - max_one;

        return 0;
    }

    int min_one = *min_element(noon, noon + 6);

    long long one = (N - 2) * (N - 1) * 4 + (N - 2) * (N - 2);
    long long two = (N - 2) * 8 + 4;

    // 보여지는 면이 1개인 경우
    if (one > 0)
        sum += min_one * one;

    // 보여지는 면이 2개인 경우
    // 근접한 면 중에서 최소값 구하기
    vector<int> v;
    for (int i = 0; i < 6; i++)
        for (int j = i + 1; j < 6; j++)
            if (i + j != 5)
                v.push_back(noon[i] + noon[j]);

    int min_two = *min_element(v.begin(), v.end());

    sum += min_two * two;

    // 보여지는 면이 3개인 경우
    vector<long long> lv{
        noon[0] + noon[1] + noon[2],
        noon[0] + noon[1] + noon[3],
        noon[0] + noon[4] + noon[2],
        noon[0] + noon[4] + noon[3],

        noon[5] + noon[1] + noon[2],
        noon[5] + noon[1] + noon[3],
        noon[5] + noon[4] + noon[2],
        noon[5] + noon[4] + noon[3]
    };
    
    long long min_three = *min_element(lv.begin(), lv.end());
    
    sum += min_three * 4;

    cout << sum;

    return 0;
}