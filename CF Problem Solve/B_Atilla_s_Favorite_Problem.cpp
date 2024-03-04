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
        int n;
        string s;
        cin >> n >> s;
        int ans = 1;
        for (int i = 0; i < n; i++)
        {
            ans = max(ans, (s[i] - 'a') + 1);
        }
        cout << ans << endl;
    }

    return 0;
}
