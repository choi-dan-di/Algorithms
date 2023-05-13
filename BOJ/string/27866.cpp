#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 문자와 문자열
    string s;
    int i;
    cin >> s >> i;
    cout << s[i - 1];

    return 0;
}