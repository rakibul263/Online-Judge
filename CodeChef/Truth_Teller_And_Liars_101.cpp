/***************************************
Author: Md Rakibul Hasan
date: 2024-08-14 20:54:47
****************************************/

#include <bits/stdc++.h>
using namespace std;

// int solution(int a, int b)
// {
//     if (a <= b)
//         return -1;
//     else
//         return a + b + 1;
// }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int tt, l;
        cin >> tt >> l;
        // int ans = solution(tt, l);
        // cout << ans << endl;

        if (tt <= l)
            cout << -1 << endl;
        else
            cout << tt + l + 1 << endl;
    }

    return 0;
}