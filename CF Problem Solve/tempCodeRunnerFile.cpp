#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int in_1, in_2;
    cin >> in_1 >> in_2;
    int sum = 0;
    for (int i = in_1; i <= in_2; i++)
    {
        sum += a[i];
    }
    cout << sum;
    return 0;
}
