#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, M, R, u, v, recent_cnt;

vector<vector<int> > adj;
vector<bool> visited;
vector<int> cnt;

void dfs(int vertex);

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 알고리즘 수업 - 깊이 우선 탐색 1
    cin >> N >> M >> R;

    adj.resize(N);
    visited.resize(N);
    cnt.resize(N);

    for (int i = 0; i < M; ++i)
    {
        cin >> u >> v;
        adj[u - 1].push_back(v - 1);
        adj[v - 1].push_back(u - 1);
    }

    for (auto& edge : adj)
        sort(edge.begin(), edge.end());

    dfs(R - 1);

    for (int i = 0; i < cnt.size(); ++i)
        cout << cnt[i] << '\n';

    return 0;
}

void dfs(int vertex)
{
    visited[vertex] = true;
    cnt[vertex] = ++recent_cnt;

    for (auto it = adj[vertex].begin(); it != adj[vertex].end(); ++it)
    {
        if (!visited[*it])
            dfs(*it);
    }
}