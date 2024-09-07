#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> sizes(N);
    for (int i = 0; i < N; i++)
    {
        cin >> sizes[i];
    }
    sort(sizes.begin(), sizes.end());
    for (int i = 0; i < M; i++)
    {
        int target;
        cin >> target;
        int ans = sizes[0];
        for (int j = 0; j < N; j++)
        {
            if (abs(sizes[j] - target) < abs(ans - target) && sizes[j] > ans)
            {
                ans = sizes[j];
            }
        }
        cout << ans << " ";
    }
}