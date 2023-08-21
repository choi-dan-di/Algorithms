#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 2007년
    int x, y;
    cin >> x >> y;
    int monthDay[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    vector<string> weeks = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
    
    int day = 0;
    for (int i = 1; i < x; i++)
        day += monthDay[i];

    day += y - 1;

    cout << weeks[day % 7];

    return 0;
}