#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, sum = 0, sum2 = 0;
    cin >> a >> b;
    int max_coin = max(a, b);
    sum = max_coin + (max_coin - 1);
    sum2 = a + b;
    cout << max(sum, sum2);

    return 0;
}