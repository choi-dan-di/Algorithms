#include <iostream>
using namespace std;

int N;
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 설탕 배달
    cin >> N;
    int count = -1;
    int maxFive = N / 5;
    for (int five = maxFive; five >= 0; five--)
    {
        int sub = N - (5 * five);
        if (sub == 0)
        {
            count = five;
            break;
        }
        else
        {
            if (sub % 3 == 0)
            {
                count = five + (sub / 3);
                break;
            }
        }
    }
    cout << count;
    return 0;
}