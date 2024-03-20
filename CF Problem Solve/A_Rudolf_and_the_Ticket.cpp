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
        int n, m, k;
        cin >> n >> m >> k;
        int l[n], r[m];
        for (int i = 0; i < n; i++)
        {
            cin >> l[i];
        }
        for (int j = 0; j < m; j++)
        {
            cin >> r[j];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (l[i] + r[j] <= k)
                {
                    count++;
                }
                else
                {
                    continue;
                }
            }
        }
        cout << count << '\n';
    }

    return 0;
}