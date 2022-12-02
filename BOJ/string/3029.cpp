#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;
vector<int> split(string str, char deli)
{
    vector<int> ret;
    stringstream ss(str);
    string temp;
    while (getline(ss, temp, deli))
        ret.push_back(stoi(temp));
    return ret;
}
string a, b;
int ret[3];
int main()
{
    // 경고
    cin >> a >> b;
    if (a == b) 
    {
        cout << "24:00:00";
        return 0;
    }

    vector<int> v1 = split(a, ':');
    vector<int> v2 = split(b, ':');
    ret[2] = v2[2] - v1[2];
    if (ret[2] < 0) 
    {
        ret[2] += 60;
        v2[1]--;
    }
    ret[1] = v2[1] - v1[1];
    if (ret[1] < 0) 
    {
        ret[1] += 60; 
        v2[0]--;
    }
    ret[0] = v2[0] - v1[0];
    if (ret[0] < 0) 
        ret[0] = 24 - v1[0] + v2[0];

    cout << setfill('0') << setw(2) << ret[0] << ":";
    cout << setfill('0') << setw(2) << ret[1] << ":";
    cout << setfill('0') << setw(2) << ret[2];
    return 0;
}