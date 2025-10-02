#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >>  b >> c;

    int cost = b + c;

    cout << (a - cost) << '\n';

    return 0;
}