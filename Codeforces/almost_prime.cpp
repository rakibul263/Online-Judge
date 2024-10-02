/***** Preprocessor Directive *****/
#include<bits/stdc++.h>

using namespace std;

/***** Macros -> Symbolic Constants *****/
#define fast_io        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define clock_on       clock_t z = clock();
#define clock_off      z = clock() - z;  cerr << "Run Time : " << static_cast<double>(z) / CLOCKS_PER_SEC << " seconds" << endl;
#define int            long long int
#define double         long double
#define endl           "\n"
#define pb             push_back
#define vi             vector<int>
#define print(a)       for(auto x : a) cout << x << " "; cout << endl

void solve(){

}

/*****Main Function*****/
int32_t main(){

    fast_io

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

clock_on

    int t = 1;
    // cin>>t;
    while(t--) solve();

     int n;
    cin >> n;
    vector<int> divisors(n + 1, 0);

    for (int i = 2; i <= n; i++) {
        if (divisors[i] == 0) {
            for (int j = i; j <= n; j += i) {
                divisors[j]++;
            }
        }
    }

    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (divisors[i] == 2) {
            count++;
        }
    }

    cout << count << endl;


clock_off

    return 0;
}