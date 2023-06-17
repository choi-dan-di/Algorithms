#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int N, M;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 기타줄
    cin >> N >> M;
    int *package_price = new int[M];
    int* unit_price = new int[M];

    for (int i = 0; i < M; i++)
        cin >> package_price[i] >> unit_price[i];

    sort(package_price, package_price + M);
    sort(unit_price, unit_price + M);

    int only_unit = unit_price[0] * N;
    int only_package = ceil(N / 6.0f) * package_price[0];
    int combine = (N / 6) * package_price[0] + (N % 6) * unit_price[0];

    int min_price = only_unit;
    min_price = min(min_price, only_package);
    min_price = min(min_price, combine);

    delete[] package_price;
    delete[] unit_price;

    cout << min_price;

    return 0;
}