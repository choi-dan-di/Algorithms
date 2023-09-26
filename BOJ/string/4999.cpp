#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string me, doctor;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 아!
    cin >> me >> doctor;

    if (me.size() >= doctor.size())
        cout << "go";
    else
        cout << "no";

    return 0;
}