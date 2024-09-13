/***************************************
Author: Md Rakibul Hasan
date: 2024-09-13 20:19:42
****************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int stp = n / 5;

    if (n % 5 != 0)
    {
        stp++;
    }
    cout << stp << endl;

    return 0;
}