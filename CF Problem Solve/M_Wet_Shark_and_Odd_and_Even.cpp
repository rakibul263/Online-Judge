#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll min = INT_MAX, sum = 0;
    int i = 0;
    while (i < n)
    {
        if (v[i] % 2 != 0 && min > v[i])
            min = v[i];
        sum += v[i];
        i++;
    }
    if (sum % 2 == 0)
        cout << sum << '\n';
    else
        cout << sum - min << '\n';

    return 0;
}