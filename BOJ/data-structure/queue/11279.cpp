#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int N, x;
priority_queue<int> pq;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 최대 힙
    cin >> N;
    while (N--)
    {
        cin >> x;
        if (x == 0)
        {
            if (pq.size() == 0)
            {
                cout << 0 << '\n';
                continue;
            }
            cout << pq.top() << '\n';
            pq.pop();
            continue;
        }
        pq.push(x);
    }

    return 0;
}