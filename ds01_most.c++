#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;
    map<string, int> map1;
    vector<string> name;
    vector<int> values;
    for (int i = 0; i < N; i++)
    {
        string name;
        cin >> name;
        map1[name]++;
    }
    map<int, string> map2;
    for (auto it = map1.begin(); it != map1.end(); it++)
    {
        map2[it->second] = it->first;
    }
    for (auto it = map2.begin(); it != map2.end(); it++)
    {
        name.push_back(it->second);
        values.push_back(it->first);
    }
    cout << name[name.size() - 1] << " " << values[values.size() - 1] << endl;
}