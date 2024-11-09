/***** Preprocessor Directive *****/
#include<bits/stdc++.h>

using namespace std;

/***** Macros -> Symbolic Constants *****/
#define fast_io        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define clock_on       clock_t z = clock();
#define clock_off      z = clock() - z;  cerr << "Run Time : " << static_cast<double>(z) / CLOCKS_PER_SEC << " seconds" << endl;
#define ll             long long int
#define endl           "\n"

void solve(){
    ll a, b, x;
    cin >> a >> b >> x;
    

    ll first = (a % x == 0) ? a : (a + (x - a % x));

    ll last = (b % x == 0) ? b : (b - (b % x));

    if (first > last) {
        cout << 0 << endl;
        return;
    }


    ll n = (last - first) / x + 1;


    ll sum = n * (first + last) / 2;

    cout << sum << endl;
}

/***** Main Function *****/
int32_t main(){

    fast_io

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    clock_on

    int t = 1;
    // cin >> t;
    while(t--) solve();

    clock_off

    return 0;
}
