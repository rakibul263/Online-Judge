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
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e')
            {
                count++;
                i += 2;
            }
            if (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p')
            {
                count++;
                i += 2;
            }
        }
        cout << count << '\n';
    }

    return 0;
}