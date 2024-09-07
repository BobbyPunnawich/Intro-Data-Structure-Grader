#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    map<string, int> map;
    for (int i = 0; i < N; i++)
    {
        string name;
        cin >> name;
        map[name]++;
    }
    vector<int> values;
    for (auto it = map.begin(); it != map.end(); it++)
    {
        values.push_back(it->second);
    }
    sort(values.begin(), values.end(), greater<int>());
    if (K >= values.size())
    {
        cout << values[values.size() - 1];
    }
    else
    {
        cout << values[K - 1];
    }
}