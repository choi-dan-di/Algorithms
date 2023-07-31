#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 팩토리얼 2
    long long N;
    cin >> N;
    
    if (N == 0)
    {
        cout << 1;
        return 0;
    }

    long long ret = 1;
    while (N > 0)
    {
        ret *= N;
        N--;
    }

    cout << ret;

    return 0;
}