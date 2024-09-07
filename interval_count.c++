#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    set<int> s1;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        s1.insert(num);
    }
    for (int i = 0; i < m; i++)
    {
        int target;
        cin >> target;
        auto it = s1.lower_bound(i);
        for ()
        {
        }
    }
}