#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int l = 0, r = 0;
    long long ans = 0;

    while (l < n && r < m)
    {
        int crt1 = 0, crt2 = 0, current = a[l];
        while (a[l] == current && l < n)
        {
            crt1++;
            l++;
        }
        while (current > b[r])
        {
            r++;
        }
        while (b[r] == current && r < m)
        {
            crt2++;
            r++;
        }
        ans += (1LL * crt1 * crt2);
    }
    cout << ans << '\n';
    return 0;
}