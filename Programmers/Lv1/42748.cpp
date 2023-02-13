#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for (int i = 0; i < commands.size(); i++)
    {
        vector<int> v;
        int start = commands[i][0] - 1;
        int end = commands[i][1] - 1;
        for (int j = 0; j < array.size(); j++)
        {
            if (start <= end)
            {
                v.push_back(array[start]);
                start++;
            }
        }
        sort(v.begin(), v.end());
        answer.push_back(v[commands[i][2] - 1]);
    }
    
    return answer;
}