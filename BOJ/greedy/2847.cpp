#include <iostream>
using namespace std;

int N, score, cnt;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 게임을 만든 동준이
    cin >> N;
    int* level = new int[N];

    for (int i = 0; i < N; i++)
        cin >> level[i];

    int last_level = level[N - 1];
    for (int i = N - 2; i >= 0; i--)
    {
        if (level[i] >= last_level)
        {
            int new_score = level[i] - last_level + 1;
            level[i] -= new_score;
            cnt += new_score;
        }
        last_level = level[i];
    }

    delete[] level;

    cout << cnt;

    return 0;
}