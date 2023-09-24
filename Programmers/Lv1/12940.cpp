#include <string>
#include <vector>
using namespace std;

int gcd(int a, int b);  // 최대공약수
int lcm(int a, int b);  // 최소공배수

// 최대공약수와 최소공배수

vector<int> solution(int n, int m) {
    return { gcd(n, m), lcm(n, m) };
}

// 최대공약수
int gcd(int a, int b)
{
    int temp = 0;
    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    
    return a;
}

// 최소 공배수
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}