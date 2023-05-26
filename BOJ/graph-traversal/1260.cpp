#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <string>
using namespace std;

int n, m, v;
vector<int> graph[10002];
bool visited[10002];
vector<int> result_dfs;
vector<int> result_bfs;

void dfs(int vertex)
{
    visited[vertex] = true;
    result_dfs.push_back(vertex);

    for (int i = 0; i < graph[vertex].size(); i++)
        if (!visited[graph[vertex][i]])
            dfs(graph[vertex][i]);
}

void bfs(int temp)
{
    queue<int> q;
    q.push(temp);
    visited[temp] = true;
    while (!q.empty())
    {
        int vertex = q.front();
        q.pop();
        result_bfs.push_back(vertex);
        for (int i = 0; i < graph[vertex].size(); i++)
        {
            if (!visited[graph[vertex][i]])
            {
                q.push(graph[vertex][i]);
                visited[graph[vertex][i]] = true;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // DFS와 BFS
    cin >> n >> m >> v;
    while (m--)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    for (int i = 1; i <= n; i++)
        sort(graph[i].begin(), graph[i].end());

    dfs(v);
    memset(visited, false, sizeof(visited));
    bfs(v);

    for (int i = 0; i < result_dfs.size(); i++)
        cout << result_dfs[i] << ' ';
    cout << '\n';
    for (int i = 0; i < result_bfs.size(); i++)
        cout << result_bfs[i] << ' ';

    return 0;
}