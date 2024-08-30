/***************************************
Author: Md Rakibul Hasan
date: 2024-08-30 12:55:30
****************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    if (n % 2 == 0)
    {
        // even
        cout << n / 2 << endl;
    }
    else
    {
        // odd
        cout << "-" << (n / 2) + 1 << endl;
    }

    return 0;
}