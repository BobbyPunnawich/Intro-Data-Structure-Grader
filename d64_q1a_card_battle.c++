#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int card;
        cin >> card;
        v.push_back(card);
    }
    sort(v.begin(), v.end());
    int round = 0;
    for (int i = 1; i <= m; i++)
    {
        int num;
        cin >> num;
        for (int j = 0; j < num; j++)
        {
            int card;
            cin >> card;
            auto it = lower_bound(v.begin(), v.end(), card);
            if (it != v.end())
            {
                // win
                v.erase(it);
            }
            else
            {
                // lose
                round = i;
                break;
            }
        }
        if (round != 0)
        {
            cout << round << endl;
            break;
        }
        if (i == m && round == 0)
        {
            cout << m + 1 << endl;
        }
    }
}