#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <windows.h>
using namespace std;

// TRIANGLE_PATH
// - (0, 0)부터 시작해서 아래 or 우측아래로만 이동 가능
// - 만나는 숫자를 모두 더함
// - 더한 숫자가 최대가 되는 경로 or 합

// 6
// 1 2
// 3 7 4
// 9 4 1 7
// 2 7 5 9 4

int N;
vector<vector<int>> board;
vector<vector<int>> cache;
vector<vector<int>> nextX;

int Path(int y, int x)
{
    // 기저 사항
    if (y >= N)
        return 0;

    // 캐시 확인
    int& ret = cache[y][x];
    if (ret != -1)
        return ret;

    // 경로 기록
    {
        int nextBottom = Path(y + 1, x);
        int nextBottomRight = Path(y + 1, x + 1);
        if (nextBottom > nextBottomRight)
            nextX[y][x] = x;
        else
            nextX[y][x] = x + 1;
    }

    // 적용
    return ret = board[y][x] + max(Path(y + 1, x), Path(y + 1, x + 1));
}

int main()
{
    board = vector<vector<int>>
    {
        { 6 },
        { 1, 2 },
        { 3, 7, 4 },
        { 9, 4, 1, 7 },
        { 2, 7, 5, 9, 4 }
    };

    N = board.size();
    cache = vector<vector<int>>(N, vector<int>(N, -1));
    nextX = vector<vector<int>>(N, vector<int>(N));

    int ret = Path(0, 0);
    cout << ret << endl;

    // 경로 만들기
    int y = 0;
    int x = 0;

    while (y < N)
    {
        cout << board[y][x] << " -> ";

        x = nextX[y][x];
        y++;
    }
}