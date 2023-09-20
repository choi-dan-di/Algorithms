#include <string>
#include <vector>

using namespace std;

// 비밀지도

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer (n, ".");
    
    for (int i = 0; i < n; i++)
    {
        int num1 = arr1[i];
        int num2 = arr2[i];
        string s = "";
        for (int j = 0; j < n; j++)
        {
            // OR 연산
            char c = ((num1 % 2) | (num2 % 2)) ? '#' : ' ';
            
            s = c + s;
            
            num1 /= 2;
            num2 /= 2;
        }
        answer[i] = s;
    }
    
    return answer;
}