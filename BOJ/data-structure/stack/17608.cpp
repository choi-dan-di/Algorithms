#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int N, h, cnt;
stack<int> s;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 막대기
    cin >> N;

    while (N--)
    {
        cin >> h;
        s.push(h);
    }

    int max_height = -1;
    while (!s.empty())
    {
        int height = s.top();

        if (max_height < height)
        {
            max_height = height;
            ++cnt;
        }

        s.pop();
    }

    cout << cnt;

    return 0;
}