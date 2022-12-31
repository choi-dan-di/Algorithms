#include <iostream>
#include <list>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 8진수 2진수
    string o;
    list<long long> d;
    cin >> o;
    for (int i = o.size() - 1; i >= 0; i--)
    {
        int n = o[i] - '0';
        while (true)
        {
            d.push_front(n % 2);
            n /= 2;
            if (n <= 1)
            {
                d.push_front(n);
                break;
            }
        }
        if (o[i] - '0' <= 3) d.push_front(0);
    }
    while (d.size() > 1 && d.front() == 0) d.pop_front();
    for (long long const &i : d)
        cout << i;

    return 0;
}