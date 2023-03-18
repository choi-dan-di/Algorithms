#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // OX 퀴즈
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        int score = 0;
        int num = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'O')
                num++;
            else if (s[i] == 'X')
                num = 0;

            score += num;
        }
        cout << score << '\n';
    }

    return 0;
}