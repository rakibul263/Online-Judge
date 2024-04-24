/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-24 14:31:20
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    char a[n];
    int anton = 0, danik = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 'A')
        {
            anton++;
        }
        else if (a[i] == 'D')
        {
            danik++;
        }
    }
    // cout << anton << " " << danik << endl;
    if (anton > danik)
        cout << "Anton" << endl;
    else if (anton < danik)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;

    return 0;
}