#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test, b, p, f, h, c;
    cin >> test;
    while (test--)
    {
        int cf = 0, cp = 0;
        cin >> b >> p >> f >> h >> c;
        if (c > h)
        {
            while (b > 1 && f--)
                cf++, b = b - 2;
            while (b > 1 && p--)
                cp++, b = b - 2;
        }
        else
        {
            while (b > 1 && p--)
                cp++, b = b - 2;
            while (b > 1 && f--)
                cf++, b = b - 2;
        }
        cout << cf * c + cp * h << endl;
    }
    return 0;
}