#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    int N;
    cin >> N;
    set<int> s1, s2;
    for (int i = 1; i <= N; i++)
    {
        s1.insert(i);
        int d;
        cin >> d;
        s2.insert(d);
    }
    if (s1 == s2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}S