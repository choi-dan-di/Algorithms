#include <iostream>
#include <algorithm>
using namespace std;

int n, s;
int a[51], b[51];
int cache[51];
int max_b_index_arr[51];

int main()
{
    // 보물
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    sort(a, a + n);
    fill_n(max_b_index_arr, n, -1);
    fill_n(cache, n, -1);
    // a의 최소값과 b의 최대값의 인덱스를 맞춰주면 됨.
    for (int i = 0; i < n; i++)
    {
        int max_b = -1;
        int max_b_index = -1;
        for (int j = 0; j < n; j++)
        {
            if (cache[j] < 0 && max_b < b[j])
            {
                max_b = b[j];
                max_b_index_arr[i] = j;
                max_b_index = j;
            }
        }
        if (max_b_index > -1) cache[max_b_index] = a[i];
    }

    for (int i = 0; i < n; i++)
    {
        a[i] = cache[i];
        s += a[i] * b[i];
    }

    printf("%d", s);

    return 0;
}