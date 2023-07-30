#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 약수
    int N;
    cin >> N;
    vector<int> v;
    while (N--)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    cout << (*v.begin()) * (*(v.end() - 1));

    return 0;
}