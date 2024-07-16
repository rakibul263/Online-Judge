/***************************************
Author: Md Rakibul Hasan
date: 2024-07-16 18:14:25
****************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int zero = 0;
    int one = 0;
    for (int a : arr)
    {
        if (a == 0)
            zero++;
        else
            one++;
    }
    if (one > 0)
        cout << "HARD" << endl;
    else
        cout << "EASY" << endl;
    return 0;
}