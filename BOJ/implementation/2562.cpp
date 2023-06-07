#include <iostream>
using namespace std;

int num[9];

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 최댓값
    for (int i = 0; i < 9; i++)
        scanf("%d", &num[i]);

    int max_index = 0;
    int max = -1;

    for (int i = 0; i < 9; i++)
    {
        if (max < num[i])
        {
            max = num[i];
            max_index = i;
        }
    }

    printf("%d\n%d", max, max_index + 1);

    return 0;
}