#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
using namespace std;

// 너비 우선 탐색
// BFS : Breadth First Search

struct Vertex
{

};

vector<Vertex> vertices;
vector<vector<int>> adjacent;
vector<bool> discovered;

void CreateGraph()
{
    vertices.resize(6);
    adjacent = vector<vector<int>>(6);
    adjacent[0].push_back(1);
    adjacent[0].push_back(3);
    adjacent[1].push_back(0);
    adjacent[1].push_back(2);
    adjacent[1].push_back(3);
    adjacent[3].push_back(4);
    adjacent[5].push_back(4);
}

// BFS
void Bfs(int here)
{
    // 누구에 의해 발견 되었는지?
    vector<int> parent(6, -1);
    // 시작점에서 얼만큼 떨어져 있는지?
    vector<int> distance(6, -1);

    // 발견한 노드 목록 저장
    queue<int> q;
    q.push(here);
    discovered[here] = true;
    
    parent[here] = here;
    distance[here] = 0;

    while (!q.empty())
    {
        here = q.front();
        q.pop();

        // 방문
        cout << "Visited : " << here << endl;

        // 인접한 노드 찾기
        for (int there : adjacent[here])
        {
            if (discovered[there])
                continue; 

            q.push(there);
            discovered[there] = true;

            parent[there] = here;
            distance[there] = distance[here] + 1;
        }
    }
}

void BfsAll()
{
    discovered = vector<bool>(6, false);

    for (int i = 0; i < vertices.size(); i++)
    {
        if (!discovered[i])
            Bfs(i);
    }
}

int main()
{
    CreateGraph();

    BfsAll();
}