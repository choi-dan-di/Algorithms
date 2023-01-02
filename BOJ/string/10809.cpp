#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 알파벳 찾기
    string s;
    cin >> s;
    for (int i = 0; i < 26; i++)
    {
        int n = s.find('a' + i);
        if (n == string::npos) n = -1;
        cout << n << " ";
    }
    return 0;
}