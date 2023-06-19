#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, connect, u, v, cnt;

class Graph
{
public:
    Graph(int n)
    {
        vertex = n;
        adj.resize(n);
        visited.resize(n);
    }

    void makeEdge(int u, int v)
    {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void dfs(int com)
    {
        visited[com] = true;
        ++cnt;
        for (int i = 0; i < adj[com].size(); ++i)
            if (!visited[adj[com][i]])
                dfs(adj[com][i]);
    }

private:
    vector<vector<int> > adj;
    vector<bool> visited;
    int vertex;
};

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 바이러스
    cin >> N >> connect;

    Graph graph(N);

    for (int i = 0; i < connect; ++i)
    {
        cin >> u >> v;
        graph.makeEdge(u - 1, v - 1);
    }

    graph.dfs(0);

    cout << cnt - 1;

    return 0;
}