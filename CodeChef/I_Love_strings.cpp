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
#define vi             vector<char>
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define arr_in(n)      int arr[n]; for(int i=0;i<n;i++) cin>>arr[i];
#define lp(n)          for(int i=0;i<n;i++)

void solve(){
    string s, t;
    cin >> s >> t;
    
    int minimum_len = min(s.length(), t.length());
    
    vi newString;
    
    lp(minimum_len) {
        newString.push_back(s[i]);
        newString.push_back(t[i]);
    }

    if (s.length() > t.length()) {
        for (int i = minimum_len; i < s.length(); i++) 
            newString.push_back(s[i]);

    } 
    else {
        for (int i = minimum_len; i < t.length(); i++)
            newString.push_back(t[i]);
    }
    
    string output(newString.begin(), newString.end());
    cout << output << endl;
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