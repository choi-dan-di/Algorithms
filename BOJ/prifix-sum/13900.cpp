#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 순서쌍의 곱의 합
    int N;
    cin >> N;
    int* arr = new int[N + 1] { 0, };
    long long* sumArr = new long long[N + 1] { 0, };
    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
        sumArr[i] = sumArr[i - 1] + arr[i];
    }

    long long sum = 0;

    for (int i = 1; i <= N; i++)
        sum += arr[i] * (sumArr[N] - sumArr[i]);

    cout << sum;

    delete[] arr;
    delete[] sumArr;

    return 0;
}