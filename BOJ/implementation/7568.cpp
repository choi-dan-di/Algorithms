#include <iostream>
using namespace std;

int N;
int body[51][2];

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 덩치
    cin >> N;
    for (int i = 0; i < N; ++i)
        cin >> body[i][0] >> body[i][1];

    int rank[51] = { 0, };
    for (int i = 0; i < N; ++i)
    {
        ++rank[i];
        for (int j = 0; j < N; ++j)
        {
            if (i != j && body[i][0] < body[j][0] && body[i][1] < body[j][1])
                ++rank[i];
        }

        cout << rank[i] << ' ';
    }

    return 0;
}