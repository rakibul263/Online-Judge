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
        int n, sum = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        int k = (sum / n), carry = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > k)
            {
                carry += (a[i] - k);
                a[i] = k;
            }
            else
            {
                int need = (k - a[i]);
                if (carry >= need)
                {
                    a[i] = k;
                    carry -= need;
                }
            }
        }
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != k)
            {
                ok = false;
                break;
            }
        }
        if (ok)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}