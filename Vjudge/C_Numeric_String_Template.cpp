/***************************************
Author: Md Rakibul Hasan
date: 2024-08-13 22:22:34
****************************************/

#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int a[N], c[N], v[N];
    map<int, int> p;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        int m;
        cin >> m;
        for (int i = 1; i <= m; i++)
        {
            string q;
            cin >> q;
            p.clear();
            if (q.size() != n)
            {
                cout << "NO" << '\n';
                continue;
            }
            for (int i = 0; i <= 26; i++)
            {
                v[i] = false;
            }

            bool flag = true;
            for (int i = 0; i < n; i++)
            {
                int d = q[i] - 'a';
                if (!v[d])
                {
                    if (p[a[i + 1]])
                        flag = false;
                    p[a[i + 1]] = true;
                    v[d] = true;
                    c[d] = a[i + 1];
                }

                flag &= (c[d] == a[i + 1]);
            }

            if (flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}