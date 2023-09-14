#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 슈퍼 마리오
    int mushroom[11] = { 0, };  // 누적 값
    for (int i = 1; i <= 10; i++)
    {
        cin >> mushroom[i];
        mushroom[i] += mushroom[i - 1];
    }

    // 처음부터 먹어야함
    int diff = 9999;
    int score = 0;
    for (int i = 1; i <= 10; i++)
    {
        int temp = abs(100 - mushroom[i]);
        // 100에 가까운 수라면
        if (temp < diff)
        {
            diff = temp;
            score = mushroom[i];
        }
        // 이전에 찾았던 수와 동일하다면 더 큰 점수로
        if (temp == diff)
        {
            score = max(score, mushroom[i]);
        }
    }

    cout << score;

    return 0;
}