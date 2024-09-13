/***************************************
Author: Md Rakibul Hasan
date: 2024-09-13 12:14:26
****************************************/

#include <bits/stdc++.h>
using namespace std;

int isPalindrome(int num)
{
    int rem, rev = 0, t = num;
    while (num > 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num = num / 10;
    }
    return (rev == t);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        if (isPalindrome(n))
            cout << "Case " << i << ": Yes" << endl;
        else
            cout << "Case " << i << ": No" << endl;
    }

    return 0;
}