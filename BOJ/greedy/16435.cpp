#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, L, h;
vector<int> fruits;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 스네이크버드
    cin >> N >> L;
    while (N--)
    {
        cin >> h;
        fruits.push_back(h);
    }

    sort(fruits.begin(), fruits.end());

    for (int i : fruits)
        if (i <= L)
            L++;

    cout << L;

    return 0;
}