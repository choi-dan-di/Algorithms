#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 두 수 비교하기
    int a, b;
    cin >> a >> b;
    if (a > b) cout << '>';
    else if (a < b) cout << '<';
    else cout << "==";

    return 0;
}