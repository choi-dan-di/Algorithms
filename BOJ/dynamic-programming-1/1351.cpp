#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

long long N, P, Q;
map<long long, long long> cache;
long long Sequence(long long n);

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 무한 수열
    cin >> N >> P >> Q;
    cache[0] = 1;

    cout << Sequence(N);

    return 0;
}

long long Sequence(long long n)
{
    if (n == 0)
        return 1;

    if (cache[n] > 0)
        return cache[n];

    return cache[n] = Sequence(n / P) + Sequence(n / Q);
}