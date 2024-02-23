#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v.push_back(a[i]);
    }
    sort(v.begin() + 1, v.end() - 1, greater<int>());
    for (int val : v)
    {
        cout << val << " ";
    }
    return 0;
}
