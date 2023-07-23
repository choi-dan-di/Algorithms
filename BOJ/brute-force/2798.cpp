#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 블랙잭
    int N, M;
    int sum = 0, max = -1;
    cin >> N >> M;

    int* arr = new int[N] {0, };

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    for (int i = 0; i < N; i++)
        for (int j = i + 1; j < N; j++)
            for (int k = j + 1; k < N; k++)
            {
                sum = arr[i] + arr[j] + arr[k];
                if (sum > max && sum <= M)
                    max = sum;
            }

    cout << max;

    delete[] arr;

    return 0;
}