#include <bits/stdc++.h>
using namespace std;

int cache[100001];

int Fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    
    if (cache[n] > 0)
        return cache[n];
    
    return cache[n] = (Fibonacci(n - 1) + Fibonacci(n - 2)) % 1234567;
}

int solution(int n) {
    int answer = 0;
    cache[0] = 0;
    cache[1] = 1;
    answer = Fibonacci(n);
    return answer;
}