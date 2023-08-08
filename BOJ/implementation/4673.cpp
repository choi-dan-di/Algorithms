#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int arr[10001];
void d(int num);

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 셀프 넘버
    
    for (int i = 0; i < 10001; i++)
        d(i);

    for (int i = 0; i < 10001; i++)
        if (arr[i] == 0)
            cout << i << '\n';

    return 0;
}

void d(int num)
{
    int sum = num;
    string s = to_string(num);
    for (int i = 0; i < s.size(); i++)
        sum += (s[i] - '0');

    if (sum < 10001) arr[sum]++;
}