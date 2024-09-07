#include <iostream>
#include <set>

using namespace std;

int main()
{
    int M, N, x;
    cin >> M >> N;
    set<int> s1, s2;
    for (int i = 0; i < M; i++)
    {
        cin >> x;
        s1.insert(x);
    }
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        s2.insert(x);
    }
    for (auto &x : s1)
    {
        if (s2.count(x))
        {
            cout << x << " ";
        }
    }
}