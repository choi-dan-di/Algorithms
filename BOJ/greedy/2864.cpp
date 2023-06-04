#include <iostream>
#include <string>
#include <regex>
using namespace std;

string a, b;
int aa, bb, min_sum, max_sum;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 5와 6의 차이
    cin >> a >> b;
    aa = stoi(regex_replace(a, regex("6"), "5"));
    bb = stoi(regex_replace(b, regex("6"), "5"));
    min_sum = aa + bb;
    aa = stoi(regex_replace(a, regex("5"), "6"));
    bb = stoi(regex_replace(b, regex("5"), "6"));
    max_sum = aa + bb;

    cout << min_sum << ' ' << max_sum;

    return 0;
}