/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-17 20:55:56
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int num)
{
    int reversed = 0;
    while (num > 0)
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int a_reversed = reverseNumber(a);
        int b_reversed = reverseNumber(b);

        a = max(a, a_reversed);
        b = min(b, b_reversed);

        if (a> b)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}