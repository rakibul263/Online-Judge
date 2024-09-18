#include <bits/stdc++.h>

using namespace std;

bool distinct(int x)
{
    set<int> d;
    while (x > 0)
    {
        if (d.count(x % 10))
            return false;
        d.insert(x % 10);
        x /= 10;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (true)
    {
        t++;
        if (distinct(t))
        {
            cout << t << endl;
            break;
        }
    }
    return 0;
}