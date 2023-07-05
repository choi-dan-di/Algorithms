#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 약수들의 합
    int n = 0;
    while (true)
    {
        cin >> n;
        vector<int> factor;

        if (n == -1)
            break;

        for (int i = 1; i < n; ++i)
            if (n % i == 0)
                factor.push_back(i);

        cout << n;

        if (accumulate(factor.begin(), factor.end(), 0) == n)
        {
            cout << " = ";
            for (int i = 0; i < factor.size(); ++i)
            {
                cout << factor[i];
                if (i < factor.size() - 1)
                    cout << " + ";
            }
            cout << '\n';
        }
        else
            cout << " is NOT perfect.\n";
    }

    return 0;
}