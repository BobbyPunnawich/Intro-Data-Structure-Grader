#include <iostream>
#include <vector>
#include <stack>
using namespace std;
void stack_concat(stack<int> &s1, stack<int> &s2)
{
    // 1 2 3 --> 3 2 1
    // 4 5 6 --> 6 5 4
    // 1 2 3 + 4 5 6 -->  s1 = 3 2 1 6 5 4
    // s4 = 4 5 6 1 2 3
    stack<int> s3, s4;
    // s3 = 3 2 1
    while (!s1.empty())
    {
        s3.push(s1.top());
        s1.pop();
    }
    // s2 = 4 5 6 1 2 3
    while (!s3.empty())
    {
        s2.push(s3.top());
        s3.pop();
    }
    while (!s2.empty())
    {
        s4.push(s2.top());
        s2.pop();
    }
    while (!s4.empty())
    {
        s1.push(s4.top());
        s4.pop();
    }
}
int main()
{
    // read input
    int n, m;
    int c;
    cin >> n >> m;
    stack<int> s1, s2;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        s1.push(c);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> c;
        s2.push(c);
    }
    // call the function
    stack_concat(s1, s2);
    // display content of the stack
    cout << "S1 has " << s1.size() << endl;
    while (!s1.empty())
    {
        cout << s1.top() << " ";
        s1.pop();
    }
    cout << endl;
    // display content of the stack
    cout << "S2 has " << s2.size() << endl;
    while (!s2.empty())
    {
        cout << s2.top() << " ";
        s2.pop();
    }
    cout << endl;
}