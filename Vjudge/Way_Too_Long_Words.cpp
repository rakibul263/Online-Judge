/***************************************
Author: Md Rakibul Hasan
date: 2024-08-12 15:27:19
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
        // cout << len << endl;
        if (len <= 10)
        {
            cout << str << endl;
        }
        else
        {
            cout << str.front() << len - 2 << str.back() << endl;
        }
    }

    return 0;
}