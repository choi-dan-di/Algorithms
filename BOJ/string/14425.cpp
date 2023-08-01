#include <iostream>
#include <algorithm>
#include <set>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 문자열 집합
    int N, M;
    cin >> N >> M;
    
    set<string> s;
    while (N--)
    {
        string str;
        cin >> str;
        s.insert(str);
    }

    int cnt = 0;
    while (M--)
    {
        string str;
        cin >> str;
        if (s.find(str) != s.end())
            cnt++;
    }

    cout << cnt;

    return 0;
}