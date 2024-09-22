#include<bits/stdc++.h>
#define int long long int

using namespace std;

int32_t main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, k;
    cin>>n>>k;

    int num_odds = (n + 1) / 2;

    if (k <= num_odds) {
        cout << 2 * k - 1 << endl;
    }
    else {
        cout << 2 * (k - num_odds) << endl;
    }


    return 0;
}