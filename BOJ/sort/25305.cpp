#include <iostream>
#include <algorithm>
using namespace std;

int N, k;
int score[1001];

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 커트라인
    cin >> N >> k;
    for (int i = 0; i < N; i++)
        cin >> score[i];

    sort(score, score + N, greater<>());

    cout << score[k - 1];

    return 0;
}