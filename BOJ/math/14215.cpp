#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 세 막대
    int a, b, c;
    cin >> a >> b >> c;

    int max_num = max(max(a, b), c);
    int sum = a + b + c;

    // 가장 긴 변이 두 합 보다 작을 때 삼각형의 최대 둘레가 성립
    if (max_num < sum - max_num)
        cout << sum;
    // 그렇지 않다면 긴 변을 두 합보다 1만큼 작게 만들기 (두 합 - 1)
    else
        cout << 2 * (sum - max_num) - 1;
    
    return 0;
}