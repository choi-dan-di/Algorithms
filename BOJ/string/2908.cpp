#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // »ó¼ö
	string a, b;
	cin >> a >> b;
	
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	
	if (stoi(a) > stoi(b)) cout << a;
	else cout << b;
    return 0;
}
