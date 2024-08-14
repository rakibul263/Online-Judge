/***************************************
Author: Md Rakibul Hasan
date: 2024-08-14 20:32:42
****************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, x, y;
    cin >> a >> b >> x >> y;

    if (x > y)
        cout << a << endl;
    else
        cout << b << endl;

    return 0;
}