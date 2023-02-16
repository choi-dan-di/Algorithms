#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <windows.h>
using namespace std;

// 동적 계획법 (DP : Dynamic Programming)

// 메모이제이션 (Memoization)
int cache[50][50];  // [n][r]

int Combination(int n, int r)
{
    // 기저 사례
    if (r == 0 || r == n)
        return 1;

    // 이미 답을 구한 적 있으면 바로 반환
    int& ret = cache[n][r];
    if (ret != -1)
        return ret;

    // 새로 답을 구해서 캐시에 저장
    return ret = Combination(n - 1, r - 1) + Combination(n - 1, r);
}

int main()
{
    // 캐시 초기화
    ::memset(cache, -1, sizeof(cache));

    __int64 start = GetTickCount64();
    int lotto = Combination(45, 6);
    __int64 end = GetTickCount64();

    cout << end - start << " ms" << endl;
}