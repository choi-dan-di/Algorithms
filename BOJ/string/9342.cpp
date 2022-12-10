#include <iostream>
#include <string>
#include <regex>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 염색체
    int t;
    string s;
    cin >> t;
    regex r("[A-F]\?A+F+C+[A-F]\?");
    while (t--)
    {
        cin >> s;
        if (regex_match(s, r)) cout << "Infected!\n";
        else cout << "Good\n";
    }
    return 0;
}