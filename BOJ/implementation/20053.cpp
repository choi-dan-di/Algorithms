#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    // 최소, 최대 2
    int t, n;
    scanf(" %d", &t);
    while (t--)
    {
        scanf(" %d", &n);
        int num[n];
        for (int i = 0; i < n; i++)
            scanf(" %d", &num[i]);

        sort(num, num + n);

        printf("%d %d\n", num[0], num[n - 1]);
    }
    
    return 0;
}