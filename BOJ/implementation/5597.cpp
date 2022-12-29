#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 과제 안 내신 분..?
    int k = 28;
    int t[30] = {};
    while (k--) 
    {
        int n;
        cin >> n;
        t[n - 1] = n;
    }

    for (int i = 0; i < 30; i++)
    {
        if (t[i] == 0) cout << (i + 1) << '\n';
    }

    return 0;
}