#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n, m;
    cin >> n >> m;
    map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        map[b] = a;
    }
    for (int i = 0; i < m; i++)
    {
        int target;
        cin >> target;
        auto it = map.lower_bound(target);
        if (it->second != 0 && target <= it->first && target >= it->second)
        {
            cout << "1" << " ";
        }
        else
        {
            cout << "0" << " ";
        }
    }
}