#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int T, M, N, K, X, Y;

class Field
{
public:
    Field() {}

    void plantingCabbage(int x, int y)
    {
        field[x][y] = 1;
    }

    bool dfs(int x, int y)
    {
        // 범위 벗어나면 종료
        if (x <= -1 || x > M || y <= -1 || y > N)
            return false;

        if (field[x][y] == 1)
        {
            // 방문 처리
            field[x][y] = -1;
            // 상하좌우에 한해 dfs
            dfs(x - 1, y);
            dfs(x + 1, y);
            dfs(x, y - 1);
            dfs(x, y + 1);
            return true;
        }
        return false;
    }
private:
    int field[55][55] = { 0, };
};


int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 유기농 배추
    cin >> T;
    int* result = new int[T] {0, };

    for (int t = 0; t < T; ++t)
    {
        cin >> M >> N >> K;
        Field field;
        int cnt = 0;
        for (int i = 0; i < K; ++i)
        {
            cin >> X >> Y;
            field.plantingCabbage(X, Y);
        }

        for (int i = 0; i < M; ++i)
            for (int j = 0; j < N; ++j)
                if (field.dfs(i, j))
                    ++cnt;

        result[t] = cnt;
    }

    for (int i = 0; i < T; ++i)
        cout << result[i] << '\n';

    delete[] result;

    return 0;
}
