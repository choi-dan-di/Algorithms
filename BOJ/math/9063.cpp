#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 대지
    int N, x, y;
    vector<int> xv;
    vector<int> yv;

    cin >> N;
    while (N--)
    {
        cin >> x >> y;
        xv.push_back(x);
        yv.push_back(y);
    }

    int max_x = *max_element(xv.begin(), xv.end());
    int max_y = *max_element(yv.begin(), yv.end());
    int min_x = *min_element(xv.begin(), xv.end());
    int min_y = *min_element(yv.begin(), yv.end());

    cout << (max_x - min_x) * (max_y - min_y);
    
    return 0;
}