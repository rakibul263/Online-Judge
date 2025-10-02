#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    int cost = n * 30;
    int rev = m * 50;

    cout << (rev - cost) << '\n';

    return 0;
}