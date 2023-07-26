#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string board[51];
string wb[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};

string bw[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};

int WBCount(int x, int y);
int BWCount(int x, int y);

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 체스판 다시 칠하기
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
        cin >> board[i];

    int minNum = 9999;
    for (int y = 0; y + 8 <= N; y++)
    {
        for (int x = 0; x + 8 <= M; x++)
        {
            int cnt = min(WBCount(x, y), BWCount(x, y));
            if (minNum > cnt)
                minNum = cnt;
        }
    }

    cout << minNum;

    return 0;
}

int WBCount(int x, int y)
{
    int cnt = 0;
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            if (board[y + i][x + j] != wb[i][j])
                cnt++;
    return cnt;
}

int BWCount(int x, int y)
{
    int cnt = 0;
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            if (board[y + i][x + j] != bw[i][j])
                cnt++;
    return cnt;
}