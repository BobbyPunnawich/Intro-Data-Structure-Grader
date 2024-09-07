#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <set>

using namespace std;

int main()
{
    int N;
    cin >> N;
    map<string, int> m;
    set<string> s;
    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        if (s.count(str))
        {
            m[str]++;
        }
        else
        {
            s.insert(str);
            m[str]++;
        }
    }
    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (it->second > 1)
        {
            cout << it->first << " " << it->second << endl;
        }
    }
}