#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll sum = 0;
    for (ll i = 1; i <= n; i++)
    {
        // if (i % 2 != 0)
        sum += i;
        i++;
    }
    cout << sum << '\n';

    return 0;
}