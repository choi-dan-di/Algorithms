#include <iostream>
using namespace std;

// 코드 제출 시에는 scanf 사용
int main()
{
    // 개수 세기
    int n, v, num[101];
    int cnt = 0;
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++)
        scanf_s("%d", &num[i]);
    scanf_s("%d", &v);
    for (int i = 0; i < n; i++)
        if (num[i] == v)
            cnt++;
    cout << cnt;
    return 0;
}