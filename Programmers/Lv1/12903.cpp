#include <string>
#include <vector>

using namespace std;

// 가운데 글자 가져오기
string solution(string s) {
    string answer = "";
    if (s.size() % 2 == 0)
    {
        answer = s[s.size() / 2 - 1];
        answer += s[s.size() / 2];
    }
    else
        answer = s[s.size() / 2];
    return answer;
}