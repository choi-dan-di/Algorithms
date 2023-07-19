#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 소트인사이드
    int arr[10] = { 0, };
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        arr[s[i] - '0']++;

    for (int i = 9; i >= 0; i--)
    {
        while (arr[i] > 0)
        {
            cout << i;
            arr[i]--;
        }
    }

    return 0;
}