#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int N, K;
queue<int> q;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 요세푸스 문제
    cin >> N >> K;

    for (int i = 1; i <= N; ++i)
        q.push(i);

    cout << "<";

    int order = 1;
    while (!q.empty())
    {
        int people = q.front();

        if (q.size() == 1)
        {
            cout << people;
            break;
        }

        if (order == K)
        {
            cout << people << ", ";
            order = 1;
        }
        else
        {
            ++order;
            q.push(people);
        }
        q.pop();
    }

    cout << ">";

    return 0;
}