#include <iostream>
#include <algorithm>
using namespace std;

int graph[1025][1025];
int sumArr[1025][1025];

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 구간 합 구하기 2
    int N, M;
    cin >> N >> M;

    // 표 값과 누적 합 배열 세팅하기
    for (int x = 1; x <= N; x++)
    {
        for (int y = 1; y <= N; y++)
        {
            cin >> graph[x][y];
            sumArr[x][y] = sumArr[x][y - 1] + sumArr[x - 1][y] - sumArr[x - 1][y - 1] + graph[x][y];
        }
    }

    while (M--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        cout << sumArr[x2][y2] - sumArr[x1 - 1][y2] - sumArr[x2][y1 - 1] + sumArr[x1 - 1][y1 - 1] << '\n';
    }

    return 0;
}