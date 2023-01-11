#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 대소문자 바꾸기 
    string s;
    cin >> s;
    // A~Z : 65~90
    // a~z : 97~122
    // 
    for (int i; i < s.size(); i++)
    {
    	if (s[i] >= 65 && s[i] <= 90) s[i] = s[i] + 32;
    	else s[i] = s[i] - 32;
	}
	
	cout << s;
    
    return 0;
}
