#include <iostream>
#include <vector>
#include <algorithm> // for sort() function

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> v1, v2;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        v1.push_back(num);
    }
    for (int i = 0; i < M; i++)
    {
        int num;
        cin >> num;
        v2.push_back(num);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    // intersection between v1 and v2
    vector<int> intersection;
    for (int i = 0; i < N; i++)
    {
        if (find(v2.begin(), v2.end(), v1[i]) != v2.end())
        {
            intersection.push_back(v1[i]);
        }
    }
    if (intersection.size() != 0)
    {
        cout << intersection[0] << " ";
    }
    for (int i = 1; i < intersection.size(); i++)
    {
        if (intersection[i] != intersection[i - 1])
        {
            cout << intersection[i] << " ";
        }
    }
}