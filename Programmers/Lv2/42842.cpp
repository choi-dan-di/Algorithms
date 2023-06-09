#include <string>
#include <vector>
using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    for (int i = 1; i <= yellow; ++i)
    {
        if (yellow % i == 0)
        {
            int w = max(i, yellow / i);
            int h = min(i, yellow / i);
            
            if (brown == 2 * (w + h) + 4)
            {
                answer.push_back(w + 2);
                answer.push_back(h + 2);
                break;
            }
        }
    }
    
    return answer;
}