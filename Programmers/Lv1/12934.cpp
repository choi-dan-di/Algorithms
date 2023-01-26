#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    double d = sqrt(n);
    if (d - int(d) == 0) 
        answer = (d + 1) * (d + 1);
    else
        answer = -1;
    return answer;
}