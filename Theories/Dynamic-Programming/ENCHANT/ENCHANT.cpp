#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <windows.h>
using namespace std;

// ENCHANT (K모 회사 손코딩)

// +0 집행검
// 무기 강화 주문서 => +1 / +2 / +3 중 하나로 강화. 실패는 없음

// +N 집행검 뜨는 경우의 수는?
// N = 9일 때
// ex) +1 +2 +3 +4 ... +9
// ex) +3 +6 +9
// ex) +1 +3 +4 ...

int N;
int cache[100];

// [+num]부터 시작해서, [+N]까지 가는 경우의 수
int Enchant(int num)
{
    // 기저 사례
    if (num > N)
        return 0;
    if (num == N)
        return 1;

    // 캐시
    int& ret = cache[num];
    if (ret != -1)
        return ret;

    // 적용
    return ret = Enchant(num + 1) + Enchant(num + 2) + Enchant(num + 3);
}

int main()
{
    N = 4;

    ::memset(cache, -1, sizeof(cache));

    int ret = Enchant(0);
    cout << ret << endl;
}