/***************************************
Author: Md Rakibul Hasan
date: 2024-08-14 20:40:46
****************************************/

#include <bits/stdc++.h>
using namespace std;

int maxValue(int black, int white, int green)
{
    int result;
    if (black > white && black > green)
        result = black;
    else if (white > green)
        result = white;
    else
        result = green;
    return result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int black, white, green;
    int max = black;
    while (t--)
    {
        cin >> black >> white >> green;
        int max = maxValue(black, white, green);
        int withoutMax = (black + white + green) - max;
        if (max <= withoutMax + 1)
            cout << "YES\n";

        else
            cout << "NO\n";
    }

    return 0;
}