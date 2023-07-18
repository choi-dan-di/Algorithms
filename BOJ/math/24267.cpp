#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 알고리즘 수업 - 알고리즘의 수행 시간 6
    long long n;
    cin >> n;
    
    cout << (((n - 2) * (n - 1) * n) / 3) / 2 << '\n' << 3;

    return 0;
}