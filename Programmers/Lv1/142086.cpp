#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    
    for (int i = 0; i < s.size(); i++)
    {
        if (i > 0)
        {
            int cnt = 0;
            bool isExist = false;
            for (int j = i - 1; j >= 0; j--)
            {
                cnt++;
                if (s[i] == s[j])
                {
                    isExist = true;
                    break;
                }
                else
                    continue;
            }
            
            if (isExist) answer.push_back(cnt);
            else answer.push_back(-1);
        }
        else
            answer.push_back(-1);
    }
    return answer;
}