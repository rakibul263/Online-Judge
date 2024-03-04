#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (1)
    {
        int n, m, sum = 0;
        cin >> n >> m;
        if (m <= 0 || n <= 0)
        {
            break;
        }
        else if (n > m)
        {
            for (int i = m; i <= n; i++)
            {
                sum = sum + i;
                cout << i << " ";
            }
        }
        else if (m > n)
        {
            for (int i = n; i <= m; i++)
            {
                sum = sum + i;
                cout << i << " ";
            }
        }
        cout << "sum =" << sum << endl;
    }
    return 0;
}
