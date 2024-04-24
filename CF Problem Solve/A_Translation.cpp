/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-24 16:02:46
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;

    reverse(t.begin(), t.end());
    // cout<<s<<endl<<t<<endl;
    if (s == t)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';

    return 0;
}