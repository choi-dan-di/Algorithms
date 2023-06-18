#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int N, M, now, cnt;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 도서관
    cin >> N >> M;
    int* book_position = new int[N];
    for (int i = 0; i < N; ++i)
    {
        cin >> book_position[i];
        if (book_position[i] < 0)
            ++now;
    }
    sort(book_position, book_position + N);

    for (int i = 0; i < now; i += M)
        cnt += abs(book_position[i] * 2);

    for (int i = N - 1; i >= now; i -= M)
        cnt += book_position[i] * 2;

    cnt -= max(abs(book_position[0]), abs(book_position[N - 1]));

    delete[] book_position;

    cout << cnt;

    return 0;
}