#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, M, u, v, result;

vector<vector<int> > adj;
vector<int> visited;

bool bfs(int vertex);

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 연결 요소의 개수
    cin >> N >> M;

    adj.resize(N + 1);
    visited.resize(N + 1);

    for (int i = 0; i < M; ++i)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i < N + 1; ++i)
        if (bfs(i))
            ++result;

    cout << result;

    return 0;
}

bool bfs(int vertex)
{
    visited[vertex] = true;

    bool isCheck = false;
    for (auto it = adj[vertex].begin(); it != adj[vertex].end(); ++it)
    {
        if (!visited[*it])
        {
            bfs(*it);
            isCheck = true;
        }
    }

    if (adj[vertex].size() == 0)
        isCheck = true;

    return isCheck;
}