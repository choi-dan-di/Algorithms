#include <iostream>
using namespace std;

int L, P, V;
int cnt = 1;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 캠핑
    while (true)
    {
        cin >> L >> P >> V;
        if (L + P + V == 0)
            break;

        cout << "Case " << cnt++ << ": " << (V / P) * L + min(V % P, L) << '\n';
    }

    return 0;
}