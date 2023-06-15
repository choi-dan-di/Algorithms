#include <iostream>
using namespace std;

int A, B, N;
int hz[6];

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 라디오
    cin >> A >> B >> N;
    for (int i = 0; i < N; i++)
        cin >> hz[i];
    
    int min_cnt = abs(A - B);
    for (int i = 0; i < N; i++)
    {
        int favorite = abs(hz[i] - B) + 1;
        if (min_cnt > favorite)
            min_cnt = favorite;
    }

    cout << min_cnt;

    return 0;
}