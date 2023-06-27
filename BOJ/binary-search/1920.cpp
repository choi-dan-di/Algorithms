#include <iostream>
#include <algorithm>
using namespace std;

int N, M;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 수 찾기
    cin >> N;
    int* A = new int[N];

    for (int i = 0; i < N; ++i)
        cin >> A[i];

    sort(A, A + N);

    cin >> M;
    int* B = new int[M];
    for (int i = 0; i < M; ++i)
        cin >> B[i];

    for (int i = 0; i < M; ++i)
    {
        int start = 0;
        int end = N - 1;

        while (true)
        {
            if (start > end)
            {
                cout << 0 << '\n';
                break;
            }

            int pivot = (start + end) / 2;

            if (A[pivot] == B[i])
            {
                cout << 1 << '\n';
                break;
            }
            else if (A[pivot] > B[i])
            {
                end = pivot - 1;
            }
            else if (A[pivot] < B[i])
            {
                start = pivot + 1;
            }
        }
    }

    delete[] A;
    delete[] B;

    return 0;
}