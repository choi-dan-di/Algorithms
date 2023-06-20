#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int N, M, R, u, v, recent_cnt;

vector<vector<int> > adj;
vector<bool> visited;
vector<int> cnt;
queue<int> q;

void bfs(int vertex);

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 알고리즘 수업 - 너비 우선 탐색 2
    cin >> N >> M >> R;
    
    adj.resize(N);
    visited.resize(N);
    cnt.resize(N);

    // 간선
    for (int i = 0; i < M; ++i)
    {
        cin >> u >> v;
        adj[u - 1].push_back(v - 1);
        adj[v - 1].push_back(u - 1);
    }

    // sort
    for (auto& edge : adj)
        sort(edge.begin(), edge.end(), greater<>());

    bfs(R - 1);

    for (int& i : cnt)
        cout << i << '\n';

    return 0;
}

void bfs(int vertex)
{
    visited[vertex] = true;

    q.push(vertex);

    while (!q.empty())
    {
        int now = q.front();
        q.pop();
        cnt[now] = ++recent_cnt;
        
        for (auto& next : adj[now])
        {
            if (!visited[next])
            {
                visited[next] = true;
                q.push(next);
            }
        }
    }
}