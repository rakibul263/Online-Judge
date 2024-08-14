/***************************************
Author: Md Rakibul Hasan
date: 2024-08-14 21:21:46
****************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(ll num)
{
    if (num < 2)
        return false;
    else if (num == 2)
        return true;
    else if (num % 2 == 0)
        return false;
    else
    {
        for (ll i = 3; i * i <= num; i += 2)
        {
            if (num % i == 0)
                return false;
        }
        return true;
    }
}

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
        vector<ll> ara(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> ara[i];
        }

        bool flag = false;

        for (ll i = 0; i < n; i++)
        {
            for (ll j = i + 1; j < n; j++)
            {
                ll total = ara[i] + ara[j];
                if (!isPrime(total))
                {
                    cout << (i + 1) << " " << (j + 1) << endl;
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
        }

        if (!flag)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}