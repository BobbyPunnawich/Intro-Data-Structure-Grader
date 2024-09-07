#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string comm;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> comm;
        if (comm == "pb")
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        else if (comm == "sa")
        {
            sort(v.begin(), v.end());
        }
        else if (comm == "sd")
        {
            sort(v.begin(), v.end(), greater<int>());
        }
        else if (comm == "r")
        {
            reverse(v.begin(), v.end());
        }
        else if (comm == "d")
        {
            int i;
            cin >> i;
            v.erase(v.begin() + i);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}