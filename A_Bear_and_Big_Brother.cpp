#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int year = 0;
    for (int i = 0; i <= 100; i++)
    {
        // cout << a << " " << b << endl;
        if (a <= b)
        {
            year++;
            a *= 3, b *= 2;
        }
    }
    cout << year << endl;
    return 0;
}
