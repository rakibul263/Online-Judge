/******************************
 * author: Md Rakibul Hasan
 * date: 2024-03-23 02:58:39
 ******************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll sum = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            sum += i;
    }
    cout << sum << '\n';

    return 0;
}