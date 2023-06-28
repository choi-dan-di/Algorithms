#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

int n;
stack<int> s;
queue<char> q;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 스택 수열
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int num = 1;
    for (int i = 0; i < n; ++i)
    {
        while (arr[i] >= num)
        {
            s.push(num++);
            q.push('+');
        }

        if (s.top() == arr[i])
            s.pop();
        q.push('-');
    }

    delete[] arr;

    if (s.size() > 0)
        cout << "NO\n";
    else
        while (!q.empty())
        {
            cout << q.front() << '\n';
            q.pop();
        }

    return 0;
}