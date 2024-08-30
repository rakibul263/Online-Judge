/***************************************
Author: Md Rakibul Hasan
date: 2024-08-30 13:05:59
****************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int ara[t];
    for (int i = 0; i < t; i++)
        cin >> ara[i];

    int newArray[t];
    for (int j = 0; j < t; j++)
        newArray[ara[j] - 1] = j + 1;

    for (int i = 0; i < t; i++)
        cout << newArray[i] << " ";

    return 0;
}