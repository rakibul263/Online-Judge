/***************************************
Author: Md Rakibul Hasan
date: 2024-08-13 21:57:46
****************************************/

#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[N], v[N];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            v[i] = 0;
        v[n + 1] = 0;

        bool flag = true;
        for (int i = 1; i <= n; i++)
        {
            v[a[i]] = true;
            if (i > 1 && !v[a[i] - 1] && !v[a[i] + 1])
                flag = false;
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}