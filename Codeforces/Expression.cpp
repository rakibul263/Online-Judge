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

    int a, b, c;
    cin>>a>>b>>c;

    //re means result
    int re1 = a+b*c;
    int re2 = a*(b+c);
    int maximum_value_of_re1_and_re2 = max(re1, re2);
    int re3 = a*b*c;
    int re4 = (a+b)*c;
    int maximum_value_of_re3_and_re4 = max(re3, re4);
    int final_max_value = max(maximum_value_of_re1_and_re2, maximum_value_of_re3_and_re4);
    int re5 = a+b+c;
    int f = max(final_max_value, re5);

    cout<<f<<endl;


clock_off

    return 0;
}