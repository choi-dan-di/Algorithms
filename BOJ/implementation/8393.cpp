#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 합
    int n, sum;
    cin >> n;
    sum = n;
    while (n--)
        sum += n;

    cout << sum;

    return 0;
}