/***************************************
Author: Md Rakibul Hasan
date: 2024-09-04 20:52:39
****************************************/

#include <bits/stdc++.h>
using namespace std;

int solve(int a, int b)
{
    int count = 0;

    while (a < 2 * b && b < 2 * a)
    {
        if (a > b)
            b--;
        else
            a--;

        count++;
    }

    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << solve(a, b) << endl;
    }

    return 0;
}