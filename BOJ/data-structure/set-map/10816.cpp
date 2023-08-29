#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 숫자 카드 2
    int N, M, card, needCard;
    cin >> N;
    map<int, int> cards;
    for (int i = 0; i < N; i++)
    {
        cin >> card;
        cards[card]++;
    }

    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> needCard;
        cout << cards[needCard] << ' ';
    }

    return 0;
}