/********************************************
Title: A_Chat_room.cpp
Author: https://github.com/rakibul263
Created: 2024-09-19 21:22:19
********************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    string hello = "hello";
    for (int i = 0, j = 0; i < s.size(); i++)
    {
        if (s[i] == hello[j])
            j++;
        if (j == 5)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}