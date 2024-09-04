/***************************************
Author: Md Rakibul Hasan
date: 2024-09-01 21:01:32
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
        int a, b;
        cin >> a >> b;

        int sum = a + 2 * b;

        if (sum % 2 != 0)
            cout << "NO" << endl;

        else
        {
            int target = sum / 2;
            if (target % 2 == 0 || (target % 2 == 1 && a >= 2))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}