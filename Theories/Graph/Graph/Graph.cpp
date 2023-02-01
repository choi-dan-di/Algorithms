#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
using namespace std;

void CreateGraph_1()
{
    struct Vertex
    {
        vector<Vertex*> edges;
    };

    vector<Vertex> v;
    v.resize(6);

    v[0].edges.push_back(&v[1]);
    v[0].edges.push_back(&v[3]);

    v[1].edges.push_back(&v[0]);
    v[1].edges.push_back(&v[2]);
    v[1].edges.push_back(&v[3]);

    v[3].edges.push_back(&v[4]);

    v[5].edges.push_back(&v[4]);

    // Q) 0번과 3번 정점이 연결되어 있나요?
    bool connected = false;
    for (Vertex* edge : v[0].edges)
    {
        if (edge == &v[3])
        {
            connected = true;
            break;
        }
    }
}

void CreateGraph_2()
{
    // 연결된 목록을 따로 관리
    // adjacent[n] -> n번재 정점과 연결된 정점 목록
    vector<vector<int>> adjacent(6);
    adjacent[0] = { 1, 3 };
    adjacent[1] = { 0, 2, 3 };
    adjacent[3] = { 4 };
    adjacent[5] = { 4 };

    // 정점이 100개
    // - 지하철 노선도 -> 서로 드문드문 연결 되어있기 때문에 나쁘지 않다.(기본은 양옆만 연결, 환승역이라면 조금 더 연결)
    // - SNS 친구 -> 서로 빽빽하게 연결 되어있기 때문에 좋지 않은 방법이 된다.
    //      - 메모리를 더 사용하여 성능을 높이는 이차 행렬과 같은 방법이 효율적이다. (CreateGraph_3)

    // Q) 0번과 3번 정점이 연결되어 있나요?
    bool connected = false;
    for (int vertex : adjacent[0])
    {
        if (vertex == 3)
        {
            connected = true;
            break;
        }
    }

    // STL
    vector<int>& adj = adjacent[0];
    bool connected2 = (std::find(adj.begin(), adj.end(), 3) != adj.end());
}

void CreateGraph_3()
{
    // 읽는 방법 : adjacent[from][to]
    // 행렬을 이용한 그래프 표현 (2차원 배열)
    // 메모리 소모가 심하지만, 빠른 접근이 가능하다.
    // 간선이 많은 경우 이점이 있다.
    vector<vector<bool>> adjacent(6, vector<bool>(6, false));
    adjacent[0][1] = true;
    adjacent[0][3] = true;
    adjacent[1][0] = true;
    adjacent[1][2] = true;
    adjacent[1][3] = true;
    adjacent[3][4] = true;
    adjacent[5][4] = true;

    // Q) 0번과 3번 정점이 연결되어 있나요?
    bool connected = adjacent[0][3];
}

// 방향 + 가중치
void CreateGraph_4()
{
    vector<vector<int>> adjacent(6, vector<int>(6, -1));
    adjacent[0][1] = 15;
    adjacent[0][3] = 35;
    adjacent[1][0] = 15;
    adjacent[1][2] = 5;
    adjacent[1][3] = 10;
    adjacent[3][4] = 5;
    adjacent[5][4] = 5;

    vector<vector<int>> adjacent2 =
    {
        vector<int> { -1, 15, -1, 35, -1, -1 },
        vector<int> { 15, -1, +5, 10, -1, -1 },
        vector<int> { -1, -1, -1, -1, -1, -1 },
        vector<int> { -1, -1, -1, -1, +5, -1 },
        vector<int> { -1, -1, -1, -1, -1, -1 },
        vector<int> { -1, -1, -1, -1, +5, -1 }
    };

    // Q) 0번과 3번 정점이 연결되어 있나요?
    bool connected = (adjacent[0][3] != -1);
    bool connected2 = (adjacent2[0][3] != -1);

    cout << adjacent2[0][3] << endl;

}

int main()
{
    CreateGraph_1();
    CreateGraph_2();
    CreateGraph_3();
    CreateGraph_4();
}