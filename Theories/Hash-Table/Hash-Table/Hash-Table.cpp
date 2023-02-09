#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <thread>
using namespace std;

// 해시 테이블

// Q) map vs hash map (C++11 표준 unordered map)

// map : Red-Black Tree 구조로 이루어져있음
// - 추가/탐색/삭제 O(log N)

// C# dictionary = C++ map (X)
// C# dictionary = C++ unordered map (O)

// hash map (unordered map)
// - 추가/탐색/삭제 O(1)

// 메모리를 내주고 속도를 취한다

// O(1)
void TestTable()
{
    struct User
    {
        int userId = 0; // 1 ~ 999
        string username;
    };

    vector<User> users;
    users.resize(1000);

    // 777번 유저 정보 세팅
    users[777] = User{ 777, "Dandi" };

    // 777번 유저 이름은?
    string name = users[777].username;
    cout << name << endl;

    // 테이블
    // 키를 알면 데이터를 단번에 찾을 수 있다.

    // 문제의 상황
    // int32_max (3억~)
}

void TestHash()
{
    struct User
    {
        int userId = 0; // 1 ~ int32_max
        string username;
    };

    vector<User> users;
    users.resize(1000);

    const int userId = 123456789;
    int key = (userId % 1000);  // hash < 고유번호

    // 777번 유저 정보 세팅
    users[key] = User{ userId, "Dandi" };

    // 777번 유저 이름은?
    User& user = users[key];
    if (user.userId == userId)
    {
        string name = users[key].username;
        cout << name << endl;
    }

    // 충돌 문제
    // 충돌이 발생한 자리를 대신해서 다른 빈자리를 찾아나서면 된다.
    // - 선형 조사법 (Linear Probing)
    // hash(key) + 1 -> hash(key) + 2
    // - 이차 조사법 (Quadratic Probing)
    // hash(key) + 1^2 -> hash(key) + 2^2

    // 체이닝
}

// O(1)
void TestHashTableChaining()
{
    struct User
    {
        int userId = 0; // 1 ~ int32_max
        string username;
    };

    vector<vector<User>> users;
    users.resize(1000);

    const int userId = 123456789;
    int key = (userId % 1000);  // hash < 고유번호

    // 123456789번 유저 정보 세팅
    users[key].push_back(User{ userId, "Dandi" });

    // 123456789번 유저 이름은?
    vector<User>& bucket = users[key];
    for (User& user : bucket)
    {
        if (user.userId == userId)
        {
            string name = user.username;
            cout << name << endl;
        }
    }
}

int main()
{
    // TestTable();
    // TestHash();
    TestHashTableChaining();
}