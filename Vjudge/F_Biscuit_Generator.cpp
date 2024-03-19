#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, t;
    cin >> a >> b >> t;
    int mul = (t + .5) / a;
    cout << mul * b << '\n';

    return 0;
}