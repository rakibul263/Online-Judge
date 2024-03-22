/**
 * author: Md Rakibul Hasan
 * date: 2024-03-23 02:25:43
 **/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;

    if (x <= 1)
    {
        cout << "NO" << endl;
        return 0;
    }

    int limit = sqrt(x);
    for (int i = 2; i <= limit; i++)
    {
        if (x % i == 0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;

    return 0;
}