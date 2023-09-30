#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 서로 다른 부분 문자열의 개수
    string S;
    cin >> S;

    set<string> ss;

    // 부분 문자열을 set에 추가
    for (int i = 1; i <= S.size(); i++)
    {
        int pivot = 0;
        while (pivot + i <= S.size())
        {
            ss.insert(S.substr(pivot, i));
            pivot++;
        }
    }

    cout << ss.size();

    return 0;
}