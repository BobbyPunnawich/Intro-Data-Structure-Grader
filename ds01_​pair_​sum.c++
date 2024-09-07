#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < M; i++)
    {
        int target;
        int print = 0;
        cin >> target;
        for (int j = 0; j < N; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                if (target == arr[j] + arr[k] && print == 0)
                {
                    cout << "YES" << endl;
                    print++;
                }
            }
        }
        if (print == 0)
        {
            cout << "NO" << endl;
        }
    }
}