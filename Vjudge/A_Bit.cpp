/***************************************
Author: Md Rakibul Hasan
date: 2024-08-13 10:15:03
****************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int X = 0;
    while (n--)
    {
        string str;
        cin >> str;
        if (str == "X++")
            X++;
        else if (str == "++X")
            ++X;
        else if (str == "X--")
            X--;
        else if (str == "--X")
            --X;
        // cout << X << endl;
    }
    cout << X;

    return 0;
}