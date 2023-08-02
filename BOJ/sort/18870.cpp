#include <iostream>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 좌표 압축
    int N;
    cin >> N;
    int* arr = new int[N];
    set<int> s;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        s.insert(arr[i]);
    }

    map<int, int> m;
    int idx = 0;
    for (auto it = s.begin(); it != s.end(); ++it)
        m.insert(make_pair(*it, idx++));

    for (int i = 0; i < N; i++)
        cout << m[arr[i]] << ' ';

    delete[] arr;

    return 0;
}