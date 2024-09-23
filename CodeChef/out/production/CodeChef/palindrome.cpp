/***************************************
Author: Md Rakibul Hasan
date: 2024-09-13 11:59:30
****************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int i = 0;
    while (t--)
    {
        string str;
        cin >> str;

        bool flag = true;
        for (int i = 0; i < str.length() / 2; i++)
        {
            if (str[i] != str[str.length() - i - 1])
            {
                flag = false;
                break;
            }
        }
        if (!flag)
            cout << "case " << i + 1 << ":" << " No" << endl;
        else
            cout << "case " << i + 1 << ":" << " Yes" << endl;
        i++;
    }

    return 0;
}