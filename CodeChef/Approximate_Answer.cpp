/***************************************
Author: Md Rakibul Hasan
date: 2024-08-28 20:31:15
****************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y, k;
    cin >> x >> y >> k;
    if (abs(x - y) > k)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;

    return 0;
}