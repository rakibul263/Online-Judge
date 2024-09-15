/***************************************
Author: Md Rakibul Hasan
date: 2024-09-12 20:03:36
****************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    int count = 0;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        count++;
    }
    cout << count << endl;

    return 0;
}