#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <windows.h>
using namespace std;

// TIC-TAC-TOE
// 3 X 3 빙고 (O/X를 이용함)

// board 상태의 경우의 수 => 3^9 = 19683
// 0 ~ 3^9
int HashKey(const vector<vector<char>>& board)
{
    int ret = 0;

    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            // . => 0, o => 1, x => 2 이라는 가정하에
            // 한 턴이 끝날 때마다 3을 곱해줘서 삼진법과 같은 계산 방식을 사용하도록 한다.
            // -> 0~19683 범위 내에서 고유의 값으로 설정된다.
            ret = ret * 3;

            if (board[y][x] == 'o')
                ret += 1;
            else if (board[y][x] == 'x')
                ret += 2;
        }
    }

    return ret;
}

vector<vector<char>> board;
int cache[19683];

enum
{
    DEFAULT = 2,
    WIN = 1,
    DRAW = 0,
    LOSE = -1
};

bool IsFinished(const vector<vector<char>>& board, char turn)
{
    // 좌우
    for (int i = 0; i < 3; i++)
        if (board[i][0] == turn && board[i][1] == turn && board[i][2] == turn)
            return true;

    // 상하
    for (int i = 0; i < 3; i++)
        if (board[0][i] == turn && board[1][i] == turn && board[2][i] == turn)
            return true;

    // 대각선
    if (board[0][0] == turn && board[1][1] == turn && board[2][2] == turn)
        return true;

    if (board[0][2] == turn && board[1][1] == turn && board[2][0] == turn)
        return true;

    return false;
}

int CanWin(vector<vector<char>>& board, char turn)
{
    // 기저 사례
    if (IsFinished(board, 'o' + 'x' - turn))
        return LOSE;

    // 캐시 확인
    int key = HashKey(board);
    int& ret = cache[key];
    if (ret != DEFAULT)
        return ret;

    // 풀기
    int minValue = DEFAULT;
    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            if (board[y][x] != '.')
                continue;

            // 착수
            board[y][x] = turn;

            // 확인
            minValue = min(minValue, CanWin(board, 'o' + 'x' - turn));  // 상대방이 패배하는 게 제일 좋은 케이스

            // 취소
            board[y][x] = '.';
        }
    }

    if (minValue == DRAW || minValue == DEFAULT)
        return ret = DRAW;

    return ret = -minValue;
}

int main()
{
    board = vector<vector<char>>
    {
        { '.', '.', '.' },
        { '.', '.', '.' },
        { '.', '.', '.' }
    };

    for (int i = 0; i < 19683; i++)
        cache[i] = DEFAULT;

    int win = CanWin(board, 'o');

    switch (win)
    {
    case WIN:
        cout << "Win" << endl;
        break;
    case DRAW:
        cout << "Draw" << endl;
        break;
    case LOSE:
        cout << "Lose" << endl;
        break;
    }
}