#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x = 1, y = 1, s = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        s += x / (1 + abs(y));
        y += x;
        x *= 0.3;
    }
    cout << s;
    return 0;
}
