#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string ret;
int main()
{
    // !밀비 급일
    while (true)
    {
        string msg;
        getline(cin, msg);
        if (msg == "END") break;

        reverse(msg.begin(), msg.end());
        ret += msg + '\n';
    }
    
    cout << ret;
    return 0;
}