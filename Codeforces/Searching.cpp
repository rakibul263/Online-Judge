/***** Preprocessor Directive *****/
#include<bits/stdc++.h>

using namespace std;

/***** Macros -> Symbolic Constants *****/
#define fast_io        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define clock_on       clock_t z = clock();
#define clock_off      z = clock() - z;  cerr << "Run Time : " << static_cast<double>(z) / CLOCKS_PER_SEC << " seconds" << endl;
#define ll             long long int
#define double         long double
#define endl           "\n"
#define pb             push_back
#define vi             vector<int>
#define print(a)       for(auto x : a) cout << x << " "; cout << endl

void solve(){
    ll n; cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
        cin>>arr[i];

    int index;
    bool flag = false;
    ll x; cin>>x;
    for(ll i=0;i<n;i++){
        if(arr[i]==x){
            index = i;
            flag = true;
            break;
        }
    }
    if(flag)
        cout<<index<<endl;
    else 
        cout<< -1 <<endl;
    
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



clock_off

    return 0;
}