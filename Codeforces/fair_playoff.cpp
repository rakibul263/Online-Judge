/***** Preprocessor Directive *****/
#include<bits/stdc++.h>

using namespace std;

/***** Macros -> Symbolic Constants *****/
#define fast_io        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define clock_on       clock_t z = clock();
#define clock_off      z = clock() - z;  cerr << "Run Time : " << static_cast<double>(z) / CLOCKS_PER_SEC << " seconds" << endl;
#define ll             long long
#define double         long double
#define endl           "\n"
#define pb             push_back
#define vi             vector<int>
#define print(a)       for(auto x : a) cout << x << " "; cout << endl

void solve(){
    ll a, b, c, d;
    cin>>a>>b>>c>>d;

    ll max_1 = max({a, b, c, d});
    ll max_2;

    if(max_1 == a){
        max_2 = max({b, c, d});
    }else if(max_1 == b){
        max_2 = max({a, c, d});
    }else if(max_1 == c){
        max_2 = max({a, b, d});
    }else{
        max_2 = max({a, b, c});
    }

    ll w1 = max(a, b);
    ll w2 = max(c, d);

    ll wm1, wm2;
    if(w1 > w2){
        wm1 = w1;
        wm2 = w2;
    }else{
        wm1 = w2;
        wm2 = w1;
    }

    if(wm1 == max_1 && wm2 == max_2){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
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