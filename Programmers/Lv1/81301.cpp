#include <string>
#include <unordered_map>

using namespace std;

unordered_map<int, string> m = 
{
    { 0, "zero" },
    { 1, "one" },
    { 2, "two" },
    { 3, "three" },
    { 4, "four" },
    { 5, "five" },
    { 6, "six" },
    { 7, "seven" },
    { 8, "eight" },
    { 9, "nine" }
};

int solution(string s) {
    for (int i = 0; i < 10; i++)
    {
        auto n = s.find(m[i]);
        while (n != string::npos)
        {
            s.replace(n, m[i].size(), to_string(i));
            n = s.find(m[i]);
        }
            
    }
    return stoi(s);
}