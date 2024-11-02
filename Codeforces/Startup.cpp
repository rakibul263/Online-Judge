#include<bits/stdc++.h>
using namespace std;

/***** Macros -> Symbolic Constants *****/
#define fast_io        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define clock_on       clock_t z = clock();
#define clock_off      z = clock() - z;  cerr << "Run Time : " << static_cast<double>(z) / CLOCKS_PER_SEC << " seconds" << endl;
#define ll            long long int
#define double         long double
#define endl           "\n"
#define pb             push_back
#define vi             vector<int>
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define freq_in(n)      int freq[n]; for(int i=0;i<n;i++) cin>>freq[i];
#define lp(n)          for(int i=0;i<n;i++)

void solve() {
    int n, k;
    cin >> n >> k;

    unordered_map<int, int> freq;
    while(k--){
        int b, c;
        cin >> b >> c;
        freq[b]+=c;
    }
    vi total;
    for(auto x : freq){
        total.pb(x.second);
    }

    sort(total.rbegin(), total.rend());

    int mx = 0;
    for(int i=0;i< min((int)total.size(), n);i++){
        mx+=total[i];
    }
    
    cout<<mx<<endl;
}

/*****Main Function*****/
int32_t main() {
    fast_io

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    clock_on

    int t=1;
    cin >> t;
    while(t--) solve();

    clock_off

    return 0;
}
