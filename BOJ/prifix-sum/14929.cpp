#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long sum = 0;
long long total = 0;
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 귀찮아 (SIB)
    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> x[i];
        total += x[i];
    }
    for (int i = 0; i + 1 < n; i++)
        sum += x[i] * (total -= x[i]);
    cout << sum;
    return 0;
}