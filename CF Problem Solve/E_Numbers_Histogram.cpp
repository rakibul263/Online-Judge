#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s;
    cin >> s;
    if (s == '+' || s == '-' || s == '*' || s == '/')
    {
        int t;
        cin >> t;
        while (t--)
        {
            int x;
            cin >> x;
            for (int i = 0; i < x; i++)
            {
                cout << s;
            }
            cout << endl;
        }
    }
    return 0;
}
