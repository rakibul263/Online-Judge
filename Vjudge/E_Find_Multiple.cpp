#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;
    bool flag = false;
    for (int i = 1; i <= 1000; i++)
    {
        int re = i * c;
        if (re >= a && re <= b)
        {
            cout << re << endl;
            flag = true;
            break;
        }
    }
    if (flag == false)
        cout << -1 << endl;

    return 0;
}