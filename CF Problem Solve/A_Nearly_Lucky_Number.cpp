/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-24 09:20:26
 ******************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const long long N = 1e18 + 5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    string s = to_string(n);
    ll length_of_string = s.length();
    // cout << length_of_string << endl;
    int count = 0;
    for (ll i = 0; i < length_of_string; i++)
    {
        if (s[i] == '4' || s[i] == '7')
        {
            count++;
        }
    }
    if (count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}