#include <iostream>
using namespace std;
int N;
int ret = 0;
int main()
{
    // 숫자의 합
    cin >> N;
    char M[N];
    cin >> M;
    for (int i = 0; i < N; i++)
        ret += M[i] - '0';
    cout << ret << '\n';
    return 0;
}