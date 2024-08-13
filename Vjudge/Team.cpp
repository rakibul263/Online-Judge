/***************************************
Author: Md Rakibul Hasan
date: 2024-08-12 15:47:14
****************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int solve = 0;
    while (t--)
    {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;
        if ((petya + vasya + tonya) >= 2)
        {
            solve++;
        }
    }
    cout << solve << endl;

    return 0;
}