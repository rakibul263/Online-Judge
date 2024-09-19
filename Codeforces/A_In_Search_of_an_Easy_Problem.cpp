/********************************************
Title: A_In_Search_of_an_Easy_Problem.cpp
Author: https://github.com/rakibul263
Created: 2024-09-19 21:10:22
********************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    bool flag = true;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "EASY" << endl;
    else
        cout << "HARD" << endl;

    return 0;
}