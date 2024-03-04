#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int up = 0, low = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
            up++;
        else
            low++;
    }
    // cout<<up<<" "<<low;
    if (up == low)
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        cout << s << endl;
    }
    else if (up < low)
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        cout << s << endl;
    }
    else if (up > low)
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = toupper(s[i]);
        }
        cout << s << endl;
    }
    else if (up == low)
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        cout << s << endl;
    }

    return 0;
}
