/***************************************
Author: Md Rakibul Hasan
date: 2024-09-13 20:06:19
****************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    char ch[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ch[i];
    }
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (ch[i] == ch[i - 1])
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}