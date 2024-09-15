/***************************************
Author: Md Rakibul Hasan
date: 2024-09-14 00:00:43
****************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long k, n, w;
    cin >> k >> n >> w;

    long long sum = 0;
    for (long long i = 1; i <= w; i++)
    {
        sum += k * i;
    }
    int ans = sum - n;
    if (ans > 0)
    {
        cout << ans << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}