#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // UCPC는 무엇의 약자일까?
    string s;
    getline(cin, s);
    char ucpc[4] = {'U', 'C', 'P', 'C'};
    int idx = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ucpc[idx])
        {
            idx++;
            if (idx == 4)
                break;
        }
    }
    
    if (idx == 4)
        cout << "I love UCPC";
    else
        cout << "I hate UCPC";

    return 0;
}