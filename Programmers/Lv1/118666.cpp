#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

unordered_map<char, int> m = 
{
    { 'R', 0 }, { 'C', 0 }, { 'J', 0 }, { 'A', 0 },
    { 'T', 0 }, { 'F', 0 }, { 'M', 0 }, { 'N', 0 },
};

string GetType(char a, char b)
{
    string ret;
    if (m[a] == m[b])
        return a < b ? ret += a : ret += b;
    
    return m[a] > m[b] ? ret += a : ret += b;
}

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    for (int i = 0; i < survey.size(); i++)
    {
        if (choices[i] == 4)
            continue;
        
        if (choices[i] < 4)
            m[survey[i][0]] += (4 - choices[i]);
        else 
            m[survey[i][1]] += (choices[i] - 4);
    }
    return GetType('R', 'T') + GetType('C', 'F') + GetType('J', 'M') + GetType('A', 'N');
}