#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 접미사 배열
    string S;
    cin >> S;
    vector<string> v;
    for (int i = 0; i < S.size(); i++)
        v.push_back(S.substr(i));

    sort(v.begin(), v.end());

    for (string s : v)
        cout << s << '\n';

    return 0;
}