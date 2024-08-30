#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (n > 2)
    {
        cout << "NO" << '\n';
        return;
    }

    if (a[1] == a[0] + 1)
        cout << "NO" << '\n';
    else
        cout << "YES" << '\n';
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
