#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
using namespace std;

// 깊이 우선 탐색
// DFS : Depth First Search
// adjacent : 인접한이라는 뜻의 단어

struct Vertex
{

};

vector<Vertex> vertices;
vector<vector<int>> adjacent;
vector<vector<int>> adjacent2;
vector<bool> visited;

void CreateGraph()
{
    vertices.resize(6);
    adjacent = vector<vector<int>>(6);
    // 1. 인접 리스트 버전
    adjacent[0].push_back(1);
    adjacent[0].push_back(3);
    adjacent[1].push_back(0);
    adjacent[1].push_back(2);
    adjacent[1].push_back(3);
    adjacent[3].push_back(4);
    adjacent[5].push_back(4);

    // 2. 인접 행렬 버전
    adjacent2 = vector<vector<int>>
    {
        { 0, 1, 0, 1, 0, 0 },
        { 1, 0, 1, 1, 0, 0 },
        { 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 1, 0 },
        { 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 1, 0 }
    };
}

// DFS
// Dfs(0)
// - Dfs(1)
// -- Dfs(2)
// -- Dfs(3)
// --- Dfs(4)
// - Dfs(5)
void Dfs(int here)
{
    // 방문
    visited[here] = true;
    cout << "Visited : " << here << endl;

    // 길이 있는지 확인
    // 1. 인접 리스트 버전
    // 모든 인접 정점을 순회한다.
    /*
    for (int i = 0; i < adjacent[here].size(); i++)
    {
        int there = adjacent[here][i];

        if (!visited[there])
            Dfs(there);
    }
    */

    // 2. 인접 행렬 버전
    for (int there = 0; there < vertices.size(); there++)
    {
        // 연결이 되어있지 않음
        if (adjacent2[here][there] == 0)
            continue;

        // 아직 방문하지 않은 곳에 있으면 방문한다.
        if (!visited[there])
            Dfs(there);
    }
}

// 끊어져있는 노드가 있을 때 탐색이 되지 않는 경우 방지
void DfsAll()
{
    visited = vector<bool>(6, false);

    for (int i = 0; i < vertices.size(); i++)
        if (!visited[i])
            Dfs(i);
}

int main()
{
    CreateGraph();

    DfsAll();
}