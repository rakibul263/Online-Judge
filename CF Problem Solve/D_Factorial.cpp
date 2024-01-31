#include <bits/stdc++.h>
using namespace std;
long long int fac(int x)
{
    if (x == 0 || x == 1)
        return 1;
    else
        return x * fac(x - 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        long long int result = fac(x);
        cout << result << endl;
    }
    return 0;
}
