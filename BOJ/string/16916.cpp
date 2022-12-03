#include <iostream>
#include <string>
#include <cstring>
using namespace std;
string S, P;
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 부분 문자열
    cin >> S >> P;
    if(strstr(S.c_str(), P.c_str()) != nullptr) cout << '1';
    else cout << '0';
    return 0;
}