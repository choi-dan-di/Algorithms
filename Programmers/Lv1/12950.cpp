#include <string>
#include <vector>

using namespace std;

// 행렬의 덧셈

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer (arr1.size());
    
    for (int i = 0; i < arr1.size(); i++)
    {
        vector<int> v (arr1[i].size(), 0);
        for (int j = 0; j < arr1[i].size(); j++)
            v[j] = arr1[i][j] + arr2[i][j];
        
        answer[i] = v;
    }
    return answer;
}