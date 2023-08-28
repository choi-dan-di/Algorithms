#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 음계
    int arr[8] = { 0, };
    for (int i = 0; i < 8; i++)
        cin >> arr[i];

    int diff = arr[1] - arr[0];
    for (int i = 1; i < 7; i++)
    {
        if (diff != arr[i + 1] - arr[i])
        {
            cout << "mixed";
            diff = 0;
            break;
        }
    }

    if (diff == 1)
        cout << "ascending";
    else if (diff == -1)
        cout << "descending";

    return 0;
}