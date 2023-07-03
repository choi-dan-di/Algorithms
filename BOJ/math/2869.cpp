#include <iostream>
#include <algorithm>
using namespace std;

int A, B, V, day;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 달팽이는 올라가고 싶다
    cin >> A >> B >> V;

    day = (V - A) / (A - B);
    cout << ((V - A) % (A - B) == 0 ? day : day + 1) + 1;

    return 0;
}