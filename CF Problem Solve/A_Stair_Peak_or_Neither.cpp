/******************************
 * author: Md Rakibul Hasan
 * date: 2024-03-28 20:50:06
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
        int a, b, c;
        cin >> a >> b >> c;
        if (b > a)
        {
            if (b < c)
                cout
                    << "STAIR" << '\n';
            else if (b > c)
                cout << "PEAK" << '\n';
            else
                cout << "NONE" << '\n';
        }
        else
            cout << "NONE" << '\n';
    }

    return 0;
}