/***************************************
Author: Md Rakibul Hasan
date: 2024-08-13 12:13:15
****************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, val;
    cin >> n >> val;
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ara[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (ara[i] > 0 && ara[i] >= ara[val - 1]) // Change made here
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}