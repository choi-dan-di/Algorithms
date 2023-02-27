#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // ATM
    cin >> N;
    vector<int> v;
    while (N--)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());

    int sum = 0;
    for (int i = 0; i < v.size(); i++)
        for (int j = 0; j <= i; j++)
            sum += v[j];

    cout << sum;

    return 0;
}