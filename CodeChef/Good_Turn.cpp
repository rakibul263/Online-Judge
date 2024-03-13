#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, sum = 0;
        cin >> a >> b;
        sum = a + b;
        if (sum > 6)
            cout << "YES" << '\n';
        else
            cout << "NO"
                 << "\n";
    }

    return 0;
}