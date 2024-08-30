/***************************************
Author: Md Rakibul Hasan
date: 2024-07-31 20:52:56
****************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, ec;
    cin >> a >> b >> c >> ec;

    if (a * b * c > ec * ec * ec)
        cout << "Cuboid" << endl;
    else if (ec * ec * ec > a * b * c)
        cout << "Cube" << endl;
    else
        cout << "Equal" << endl;

    return 0;
}