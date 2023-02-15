#include <iostream>
#include <vector>
using namespace std;

class DisjointSet
{
public:
    DisjointSet(int n) : _parent(n), _rank(n, 0)
    {
        for (int i = 0; i < n; i++)
            _parent[i] = i;
    }

    int Find(int u)
    {
        if (u == _parent[u])
            return u;
        return _parent[u] = Find(_parent[u]);
    }

    void Union(int u, int v)
    {
        u = Find(u);
        v = Find(v);

        if (u == v)
            return;

        if (_rank[u] > _rank[v])
            swap(u, v);
        
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
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	// 집합의 표현
    int n, m, a, b, c;
    cin >> n >> m;
    DisjointSet sets(n + 1);
    while (m--)
    {
        cin >> c >> a >> b;
        if (c)
        {
            int u = sets.Find(a);
            int v = sets.Find(b);
            if (u == v)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
        {
            sets.Union(a, b);
        }
    }
    return 0;
}