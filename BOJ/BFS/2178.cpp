#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int N, M, cnt;
int maze[101][101];
int cnt_arr[101][101];
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
queue<pair<int, int> > q;

void bfs(int x, int y);

int main()
{
    // ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 미로 탐색
    cin >> N >> M;
    for (int i = 1; i <= N; ++i)
        for (int j = 1; j <= M; ++j)
            scanf("%1d", &maze[i][j]);

    fill(&cnt_arr[0][0], &cnt_arr[N + 1][M + 1], 99999);

    bfs(1, 1);

    cout << cnt_arr[N][M];

    return 0;
}

void bfs(int x, int y)
{
    // 방문처리
    maze[x][y] = -1;
    // 큐에 삽입
    q.push(pair<int, int>(x, y));
    while (!q.empty())
    {
        pair<int, int> now = q.front();
        q.pop();
        ++cnt;
        cnt_arr[now.first][now.second] = min(cnt_arr[now.first][now.second], cnt);

        // 상, 하, 좌, 우 좌표 확인해서 1이면 큐에 넣기
        bool isRight = false;
        for (int i = 0; i < 4; ++i)
        {
            int nextX = now.first + dx[i];
            int nextY = now.second + dy[i];

            if (nextX <= 0 || nextX > N || nextY <= 0 || nextY > M)
                continue;

            if (maze[nextX][nextY] == 1)
            {
                isRight = true;
                // 인접 노드 방문 처리
                maze[nextX][nextY] = -1;
                cnt_arr[nextX][nextY] = min(cnt_arr[nextX][nextY], cnt_arr[now.first][now.second] + 1);
                q.push(pair<int, int>(nextX, nextY));
            }
        }
    }
}