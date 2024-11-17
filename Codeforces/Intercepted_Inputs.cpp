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
#define arr_in(n)      int arr[n]; for(int i=0;i<n;i++) cin>>arr[i];
#define lp(n)          for(int i=0;i<n;i++)

void solve(){
    int k;
    cin>>k;
    vi a(k);
    for(auto &x : a)
        cin>>k;
    int s = k - 2;
    vector<pair<int, int>>divisors;
    for(int d = 1;d*d<=s;d++){
        if(s%d == 0){
            divisors.emplace_back(d, s/d);
            if(d!=s/d)
                divisors.emplace_back(s/d, d);
        }
    }
    sort(a.begin(), a.end());
    bool found = false;
    
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
    cin>>t;
    while(t--) solve();



clock_off

    return 0;
}