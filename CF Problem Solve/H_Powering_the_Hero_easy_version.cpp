/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-02 03:20:37
 ******************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll ans = 0;
        priority_queue<ll> pq;

        for (ll i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                if (pq.empty())
                    continue;
                ans += pq.top();
                pq.pop();
            }
            else
                pq.push(v[i]);
        }
        cout << ans << endl;
    }

    return 0;
}