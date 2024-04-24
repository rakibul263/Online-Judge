/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-24 09:09:54
 ******************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;

    for (ll i = 0; i < k; i++)
    {
        ll div = n % 10;
        if (div == 0)
            n = n / 10;
        else
            n -= 1;
    }
    cout << n << '\n';

    return 0;
}