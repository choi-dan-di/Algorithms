#include <iostream>
#include <stack>
using namespace std;

int K, N;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 스택
    cin >> K;
    stack<int> s;
    while (K--)
    {
        cin >> N;
        if (N > 0)
            s.push(N);
        else if (N == 0)
            s.pop();
    }

    int sum = 0;
    while (!s.empty())
    {
        sum += s.top();
        s.pop();
    }

    cout << sum;

    return 0;
}