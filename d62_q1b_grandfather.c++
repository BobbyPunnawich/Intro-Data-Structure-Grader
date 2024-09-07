#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N, M;
    cin >> N >> M;
    long F, S, c1, c2;
    map<long, long> relation;
    for (int i = 0; i < N; i++)
    {
        cin >> F >> S;
        relation[S] = F;
    }
    for (int i = 0; i < M; i++)
    {
        cin >> c1 >> c2;
        if (relation[relation[c1]] == relation[relation[c2]] && c1 != c2 && relation[relation[c1]] != 0 && relation[relation[c2]] != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}