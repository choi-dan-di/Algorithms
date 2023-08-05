#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 열 개씩 끊어 출력하기
    string s;
    cin >> s;

    int limit = 10;
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i];
        limit--;

        if (limit == 0)
        {
            cout << '\n';
            limit = 10;
        }
    }

    return 0;
}