#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int x = 1;
    int y = 0;
    int cnt = 1;
    while (s.size())
    {
        if (s[0] == s[cnt]) x++;
        else y++;
        
        if (x == y)
        {
            answer++;
            if (cnt + 1 < s.size()) 
            {
                s = s.substr(cnt + 1);
                x = 1; y = 0; cnt = 0;
            }
            else
                break;
        }
        
        if (cnt + 1 >= s.size())
        {
            answer++;
            break;
        }
        cnt++;
    }
    return answer;
}