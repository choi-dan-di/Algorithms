#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 이건 꼭 풀어야 해!
    int N, Q, L, R;
    cin >> N >> Q;
    vector<int> a(N + 1, 0);
    vector<int> s(N + 1, 0);    // 누적 합

    for (int i = 1; i <= N; i++)
        cin >> a[i];

    // 비내림차순 == (감소하지 않는) 같거나 오름차순으로 정렬
    sort(a.begin(), a.end());

    for (int i = 1; i <= N; i++)
        s[i] = s[i - 1] + a[i];

    // Q만큼 L과 R 사이의 합 구하기
    while (Q--)
    {
        cin >> L >> R;
        cout << s[R] - s[L - 1] << '\n';
    }

    return 0;
}