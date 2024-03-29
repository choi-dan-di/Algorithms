﻿#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
using namespace std;

// 그래프/트리 응용
// 최소 스패닝 트리 (MST : Minimum Spanning Tree)

// 상호 배타적 집합 (Disjoint Set)
// -> 유니온-파인드 (Union-Find) : 합치기-찾기

// Lineage Battleground (혼종!)
// 혈맹전 + 서바이벌
// 1인 팀 1000명 (팀id 0~999)
// 동맹 (1번팀 + 2번팀 = 1번팀)

void LineageBattleground()
{
    struct User
    {
        int teamId;
        // TODO
    };

    // TODO : UserManager
    vector<User> users;
    for (int i = 0; i < 1000; i++)
    {
        users.push_back(User{ i });
    }

    // 팀 동맹
    // users[1] <-> users[5]
    users[5].teamId = users[1].teamId;  // 1

    // teamId = 1인 팀과 teamId = 2인 팀이 통합
    for (User& user : users)
    {
        if (user.teamId == 1)
            user.teamId = 2;
    }

    // 찾기 연산 : O(1)
    // 합치기 연산 : O(N)
}

// 트리 구조를 이용한 상호 배타적 집합의 표현
struct Node
{
    Node* leader;
};

// 합병 : 트리 구조에 포함시킨다.
// 시간 복잡도 : 트리의 높이에 비례한 시간이 걸림
// -> O(Ackermann(n)) = O(1) (Disjoint Set 사용 시)
class NaiveDisjointSet
{
public:
    NaiveDisjointSet(int n) : _parent(n)
    {
        for (int i = 0; i < n; i++)
            _parent[i] = i;
    }

    // 리더 찾기
    int Find(int u)
    {
        if (u == _parent[u])
            return u;

        return Find(_parent[u]);
    }

    // u와 v를 병합 (u가 v 산하로)
    void Merge(int u, int v)
    {
        u = Find(u);
        v = Find(v);

        if (u == v)
            return;

        _parent[u] = v;
    }
private:
    vector<int> _parent;
};

// 트리가 한 쪽으로 기우는 문제를 해결하려면?
// 트리를 합칠 때, 항상 [높이가 낮은 트리]를 [높이가 높은 트리] 밑으로 이동
// (Union-By-Rank) 랭크에 의한 합치기 최적화
class DisjointSet
{
public:
    DisjointSet(int n) : _parent(n), _rank(n, 1)
    {
        for (int i = 0; i < n; i++)
            _parent[i] = i;
    }

    // 리더 찾기
    int Find(int u)
    {
        if (u == _parent[u])
            return u;

        return _parent[u] = Find(_parent[u]);
    }

    // u와 v를 병합 (u가 v 산하로)
    void Merge(int u, int v)
    {
        u = Find(u);
        v = Find(v);

        if (u == v)
            return;

        if (_rank[u] > _rank[v])
            swap(u, v);

        // rank[u] <= rank[v] 보장됨

        _parent[u] = v;

        if (_rank[u] == _rank[v])
            _rank[v]++;
    }
private:
    vector<int> _parent;
    vector<int> _rank;
};

int main()
{
    DisjointSet teams(1000);

    teams.Merge(10, 1);
    int teamId = teams.Find(1);
    int teamId2 = teams.Find(10);

    teams.Merge(3, 2);
    int teamId3 = teams.Find(3);
    int teamId4 = teams.Find(2);

    teams.Merge(1, 3);
    int teamId6 = teams.Find(1);
    int teamId7 = teams.Find(3);
    int teamId8 = teams.Find(10);

    teams.Merge(5, 7);
    int teamId9 = teams.Find(5);
    int teamId10 = teams.Find(7);

    teams.Merge(9, 11);
    teams.Merge(7, 9);

    teams.Merge(5, 2);
}