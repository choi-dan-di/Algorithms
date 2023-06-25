#include <iostream>
#include <algorithm>
using namespace std;

int N, M, R, G, B, T, cnt;
int display[1001][1001];

bool dfs(int x, int y);

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 영상처리
    cin >> N >> M;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            cin >> R >> G >> B;
            display[i][j] = (R + G + B) / 3;
        }
    }
    cin >> T;
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            if (display[i][j] >= T)
                display[i][j] = 255;
            else
                display[i][j] = 0;

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            if (dfs(i, j))
                ++cnt;

    cout << cnt;

    return 0;
}

bool dfs(int x, int y)
{
    if (x <= -1 || x > N || y <= -1 || y > M)
        return false;

    if (display[x][y] == 255)
    {
        display[x][y] = -1;

        dfs(x - 1, y);
        dfs(x + 1, y);
        dfs(x, y - 1);
        dfs(x, y + 1);
        return true;
    }

    return false;
}