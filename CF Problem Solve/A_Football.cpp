/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-24 18:09:51
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int size = s.length();
    int x = 0, y = 0;
    bool flag = false;
    for (int i = 0; i < size; i++)
    {
        if (s[i] == '1')
        {
            x++;
            y = 0;
        }
        else
        {
            y++;
            x = 0;
        }
        if (x >= 7 || y >= 7)
        {
            flag = true;
        }
    }
    if (flag)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';

    return 0;
}