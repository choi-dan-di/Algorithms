#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 숫자 카드
    int N, M;
    cin >> N;
    
    set<int> s;
    while (N--)
    {
        int num;
        cin >> num;
        s.insert(num);
    }

    cin >> M;
    while (M--)
    {
        int num;
        cin >> num;
        cout << s.count(num) << ' ';
    }

    return 0;
}