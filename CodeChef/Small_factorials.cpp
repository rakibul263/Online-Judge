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

void multiply(vector<int> &ans, int x) {
    int carry = 0;
    for (int i = 0; i < ans.size(); i++) {
        int p = ans[i] * x + carry;
        ans[i] = p % 10;  
        carry = p / 10; 
    }
    while (carry) {
        ans.push_back(carry % 10);
        carry /= 10;
    }
}

void large_factorial(int n) {
    vector<int> ans(1, 1);
    for (int i = 2; i <= n; i++) {
        multiply(ans, i); 
    }
    
    for (int i = ans.size() - 1; i >= 0; i--) {
        cout << ans[i];
    }
    cout << endl;
}

void solve(){
    int n;
    cin>>n;
    large_factorial(n); 
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
