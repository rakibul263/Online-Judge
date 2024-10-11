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

    float a;
    cin>>a;

    if(a>=0 && a<=25)
        cout<<"Interval [0,25]"<<endl;
    else if(a>25 && a<=50)
        cout<<"Interval (25,50]"<<endl;
    else if(a>50 && a<=75)
        cout<<"Interval (50,75]"<<endl;
    else if(a>75 && a<=100)
        cout<<"Interval (75,100]"<<endl;
    else
        cout<<"Out of Intervals"<<endl;
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