#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <iomanip>
#include <utility>

using namespace std;

int main()
{
    cout << std::fixed << std::setprecision(2);
    int N;
    cin >> N;
    map<string, pair<int, int>> courses;
    map<string, pair<int, int>> instructors;
    for (int i = 0; i < N; i++)
    {
        int points;
        string course, instructor;
        cin >> course >> instructor >> points;
        courses[course].first += points;
        courses[course].second++;
        instructors[instructor].first += points;
        instructors[instructor].second++;
    }
    for (auto it = courses.begin(); it != courses.end(); it++)
    {
        cout << it->first << " " << ((it->second).first + 0.0) / (it->second).second << endl;
    }
    for (auto it = instructors.begin(); it != instructors.end(); it++)
    {
        cout << it->first << " " << ((it->second).first + 0.0) / (it->second).second << endl;
    }
}