#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 나머지 합
    int N, M, num;
    cin >> N >> M;
    vector<long> s(N, 0);   // 누적 합 저장
    vector<long> c(M, 0);   // 나머지 개수 저장

    cin >> s[0];
    for (int i = 1; i < N; i++)
    {
        cin >> s[i];
        s[i] += s[i - 1];
    }

    for (int i = 0; i < N; i++)
    {
        // M으로 나눈 나머지 값으로 변경
        s[i] %= M;
        // 나머지 개수 저장
        c[s[i]]++;
    }

    // 0부터 i까지의 합 중 나누어 떨어지는 구간 개수
    long cnt = c[0];
    // 0이 아닌 나머지 중 같은 수 중 2개를 고를 수 있는 수
    for (int i = 0; i < c.size(); i++)
        if (c[i] > 1)   // 2개 이상만 유효한 계산이 가능
            cnt += (c[i] * (c[i] - 1)) / 2;

    cout << cnt;

    return 0;
}