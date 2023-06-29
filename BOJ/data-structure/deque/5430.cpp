#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <deque>
using namespace std;

int T, n;
string p, x;
deque<int> d;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // AC
    cin >> T;

    while (T--)
    {
        cin >> p >> n >> x;

        // 배열 가공
        x = x.substr(1, x.size() - 2);
        istringstream ss(x);
        string temp;
        while (getline(ss, temp, ','))
            d.push_back(stoi(temp));

        // 함수 수행
        bool isForward = true;
        bool isError = false;
        int reverseCount = 0;
        for (int i = 0; i < p.size(); ++i)
        {
            if (p[i] == 'R')
            {
                isForward = !isForward;
                ++reverseCount;
            }
            else if (p[i] == 'D')
            {
                if (d.size() == 0)
                {
                    cout << "error\n";
                    isError = true;
                    break;
                }

                if (isForward)
                    d.pop_front();
                else
                    d.pop_back();
            }
        }

        if (!isError) cout << "[";

        while (!d.empty())
        {
            if (reverseCount % 2 == 0)
            {
                cout << d.front();
                d.pop_front();
            }
            else
            {
                cout << d.back();
                d.pop_back();
            }
            
            if (d.size() > 0) cout << ",";
        }

        if (!isError) cout << "]\n";
    }

    return 0;
}