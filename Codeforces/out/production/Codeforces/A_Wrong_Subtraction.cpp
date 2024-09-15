/***************************************
Author: Md Rakibul Hasan
date: 2024-09-14 02:09:44
****************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        if (n % 10 != 0)
        {
            n -= 1;
        }
        else
        {
            n /= 10;
        }
    }
    cout << n << endl;

    return 0;
}