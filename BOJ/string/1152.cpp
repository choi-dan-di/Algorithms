#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 단어의 개수 
    string s;
	getline(cin, s);
	int w = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (i > 0 && s[i] == ' ') w++;
		if (i == s.size() - 1 && s[i] != ' ') w++;
	}
	cout << w;
    return 0;
}
