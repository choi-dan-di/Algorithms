#include <iostream>
using namespace std;
string s;
int num[27] = { 3, 2, 1, 2, 3, 3, 3, 3, 1, 1, 3, 1, 3, 3, 1, 2, 2, 2, 1, 2, 1, 1, 2, 2, 2, 1 };
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 이 구역의 승자는 누구야?!
    cin >> s;
    int sum = 0;
    int k = s.size();
    while(k--) sum += num[s[k] - 'A'];
    if(sum % 2 == 0) cout << "You're the winner?";
    else cout << "I'm a winner!";
    return 0;
}