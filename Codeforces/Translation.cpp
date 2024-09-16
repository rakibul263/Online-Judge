/***************************************
Author: Md Rakibul Hasan
date: 2024-09-16 16:47:53
****************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;

    reverse(s.begin(), s.end());
    // cout << s << endl;
    if (s == t)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}