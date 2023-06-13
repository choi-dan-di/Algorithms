#include <iostream>
#include <string>
using namespace std;

string S;
int cnt[2];

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 뒤집기
    cin >> S;
    
    char before_s = S[0];
    cnt[S[0] - '0']++;
    for (int i = 1; i < S.size(); i++)
    {
        if (before_s == S[i])
            continue;

        cnt[S[i] - '0']++;
        before_s = S[i];
    }

    cout << min(cnt[0], cnt[1]);

    return 0;
}