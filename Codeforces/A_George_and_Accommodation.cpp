/********************************************
Title: A_George_and_Accommodation.cpp
Author: https://github.com/rakibul263
Created: 2024-09-19 22:00:31
********************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int count = 0, rem = 0;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        rem = b - a;
        if (rem >= 2)
            count++;
    }
    cout << count << endl;

    return 0;
}