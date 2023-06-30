#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

string A, B, result;
vector<int> av, bv;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 
    cin >> A >> B;

    if (A.size() > B.size())
    {
        int diff = A.size() - B.size();
        for (int i = 0; i < diff; ++i)
            bv.push_back(0);
    }
    else if (A.size() < B.size())
    {
        int diff = B.size() - A.size();
        for (int i = 0; i < diff; ++i)
            av.push_back(0);
    }

    for (int i = 0; i < A.size(); ++i)
        av.push_back(A[i] - '0');

    for (int i = 0; i < B.size(); ++i)
        bv.push_back(B[i] - '0');

    int num = 0;
    for (int i = av.size() - 1; i >= 0; --i)
    {
        int temp = av[i] + bv[i] + num;
        if (temp > 9)
        {
            result += to_string(temp % 10);
            num = temp / 10;
        }
        else
        {
            result += to_string(temp);
            num = 0;
        }
    }

    if (num > 0)
        result += to_string(num);

    reverse(result.begin(), result.end());

    cout << result;

    return 0;
}