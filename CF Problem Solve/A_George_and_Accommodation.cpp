/***************************************
Author: Md Rakibul Hasan
date: 2024-07-17 19:30:50
****************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int count = 0, re = 0;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        re = b - a;
        // cout << re << endl;
        if (re >= 2)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}