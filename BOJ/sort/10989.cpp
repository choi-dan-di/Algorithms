#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 수 정렬하기 3
    int N, num;
    cin >> N;
    int arr[10001] = { 0, };
    
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        arr[num]++;
    }

    for (int i = 1; i < 10001; i++)
    {
        while (arr[i] > 0)
        {
            cout << i << '\n';
            arr[i]--;
        }
    }

    return 0;
}