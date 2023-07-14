#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 숫자의 개수
    int A, B, C;
    cin >> A >> B >> C;
    string ret = to_string(A * B * C);
    int* arr = new int[10] { 0, };

    for (int i = 0; i < ret.size(); i++)
        arr[ret[i] - '0']++;

    for (int i = 0; i < 10; i++)
        cout << arr[i] << '\n';

    delete[] arr;
    
    return 0;
}