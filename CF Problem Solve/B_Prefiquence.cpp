/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-02 21:01:18
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
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        int k = 0, j = 0;
        for (int i = 0; i < m; i++)
        {
            if (j < n && a[j] == b[i])
            {
                j++;
                k++;
            }
        }
        cout << k << '\n';
    }

    return 0;
}