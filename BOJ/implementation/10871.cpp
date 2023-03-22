#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // X보다 작은 수
    int n, x, num;
    vector<int> v;
    cin >> n >> x;
    while (n--)
    {
        cin >> num;
        v.push_back(num);
    }
    for (int i : v)
        if (i < x)
            cout << i << ' ';

    return 0;
}