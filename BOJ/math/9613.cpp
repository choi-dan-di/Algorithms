#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long gcd(int a, int b);

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // GCD 합
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        vector<int> v(n, 0);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        long sum = 0;
        for (int i = 0; i < v.size(); i++)
            for (int j = i + 1; j < v.size(); j++)
                sum += gcd(v[i], v[j]);

        cout << sum << '\n';
    }

    return 0;
}

long gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}