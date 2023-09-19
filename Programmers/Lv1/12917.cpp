#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// 문자열 내림차순으로 배치하기

string solution(string s) {
    string answer = "";
    vector<int> v (s.size(), 0);
    
    for (int i = 0; i < s.size(); i++)
        v[i] = s[i] - 'A';
        
    sort(v.begin(), v.end(), greater<int>());
        
    for (int i = 0; i < v.size(); i++)
        answer += v[i] + 'A';
    
    return answer;
}