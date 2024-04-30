/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-30 13:29:17
 *problem link: https://cses.fi/problemset/task/1620
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // lemda function
    auto ok = [&](long long m)
    {
        long long total = 0;
        for (int i = 0; i < n; i++)
        {
            total += (m / a[i]);
            if (total >= t)
                return true;
        }
        return false;
    };

    // binary search
    long long l = 1, r = 1e18, mid, ans;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }

    cout << ans << endl;

    return 0;
}