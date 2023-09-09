#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <map>
#include <vector>
using namespace std;

// 빈도수 비교 함수
static bool cmp(pair<int, int>& a, pair<int, int>& b);

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 통계학
    int N;
    cin >> N;

    // N이 1일 경우는 답이 모두 아래와 같음
    if (N == 1)
    {
        int num;
        cin >> num;
        cout << num << '\n';
        cout << num << '\n';
        cout << num << '\n';
        cout << 0;
    }
    else
    {
        int* arr = new int[N] { 0, };
        map<int, int> frequency;

        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
            frequency[arr[i]]++;
        }

        // 산술평균 : N개의 수들의 합을 N으로 나눈 값. 첫째 자리에서 반올림
        int avg = round(accumulate(arr, arr + N, 0) / (float)N);
        cout << (avg == -0 ? 0 : avg) << '\n';

        // 중앙값 : N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값
        sort(arr, arr + N);
        cout << arr[N / 2] << '\n';

        // 최빈값 : N개의 수들 중 가장 많이 나타나는 값
        vector<pair<int, int>> temp(frequency.begin(), frequency.end());
        sort(temp.begin(), temp.end(), cmp);
        if (temp[0].second == temp[1].second)
            cout << temp[1].first << '\n';
        else
            cout << temp[0].first << '\n';

        // 범위 : N개의 수들 중 최댓값과 최솟값의 차이
        cout << arr[N - 1] - arr[0];

        delete[] arr;
    }

    return 0;
}

static bool cmp(pair<int, int>& a, pair<int, int>& b)
{
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}