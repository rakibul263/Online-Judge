/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-03 01:21:26
 ******************************/

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
        int n;
        cin >> n;
        int arra[n];
        for (int i = 0; i < n; i++)
            cin >> arra[i];
        bool ok = true;

        if (n > 1)
        {
            if (arra[0] != arra[n - 1])
                ok = false;
            else
            {
                for (int i = 0; i < n; i++)
                {
                    if (arra[i] < arra[0])
                    {
                        ok = false;
                        break;
                    }
                }
            }
        }
        if (ok)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}