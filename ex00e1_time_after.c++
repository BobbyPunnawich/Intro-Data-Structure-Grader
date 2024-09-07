#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int H, M, X;
    cin >> H >> M >> X;
    M = M + X;
    if (M >= 60)
    {
        H = H + M / 60;
        M = M % 60;
        H = H % 24;
    }

    if (H < 10)
    {
        cout << "0";
    }
    cout << H;
    cout << " ";
    if (M < 10)
    {
        cout << "0";
    }
    cout << M;
    return 0;
}