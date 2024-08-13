/***************************************
Author: Md Rakibul Hasan
date: 2024-08-12 16:29:36
****************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, m, a;
    cin >> n >> m >> a;

    long long flagstones_n = (n + a - 1) / a;
    long long flagstones_m = (m + a - 1) / a;

    long long result = flagstones_n * flagstones_m;

    cout << result << endl;

    return 0;
}