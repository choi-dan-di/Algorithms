#include <string>
#include <vector>
#include <cmath>
using namespace std;

// 3진법 뒤집기

int solution(int n) {
    int answer = 0;
    string temp = "";
    
    while (true)
    {
        if (n < 3)
        {
            temp += (n + '0');
            break;
        }
        
        temp += ((n % 3) + '0');
        n /= 3;
    }
    
    for (int i = 0; i < temp.size(); i++)
        answer += pow(3, i) * (temp[temp.size() - i - 1] - '0');
    
    return answer;
}