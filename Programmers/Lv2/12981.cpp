#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <cmath>

using namespace std;
// 영어 끝말잇기
vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    map<string, int> m;
    
    char beforeChar = words[0].back();
    m[words[0]]++;
    for (int i = 1; i < words.size(); i++)
    {
        // 각 단어를 id로 가지는 맵 카운트를 증가
        if (beforeChar == words[i].front() && m[words[i]] == 0)
        {
            // 끝말잇기 유효
            m[words[i]]++;
            beforeChar = words[i].back();
        }
        else
        {
            // 끝말잇기 탈락
            answer.push_back((i % n) + 1);
            answer.push_back(i / n + 1);
            break;
        }
    }
    
    if (answer.size() == 0)
    {
        answer.push_back(0);
        answer.push_back(0);
    }

    return answer;
}