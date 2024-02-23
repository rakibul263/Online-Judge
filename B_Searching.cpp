#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long int x;
    cin >> x;
    long long int flag = -1;

    for (int i = 0; i < n; i++)
    {
        if (x == a[i])
        {
            flag = i;
            break;
        }
    }
    if (flag == -1)
        cout << "-1";
    else
        cout << flag;

    return 0;
}