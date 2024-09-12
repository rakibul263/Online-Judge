/***************************************
Author: Md Rakibul Hasan
date: 2024-09-07 02:21:44
****************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int len = str.length();
        if (len <= 10)
            cout << str << endl;
        else
            cout << str.front() << len - 2 << str.back() << endl;
    }

    return 0;
}