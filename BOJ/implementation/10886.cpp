#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 0 = not cute / 1 = cute
    int N, num;
    cin >> N;
    int arr[2] = { 0, };
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        arr[num]++;
    }

    cout << "Junhee is ";
    if (arr[0] > arr[1])
        cout << "not ";
    cout << "cute!";

    return 0;
}