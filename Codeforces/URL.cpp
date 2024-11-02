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
    string s;
    getline(cin, s);  // Reading the entire input line
    vi temp;
    
    for(char ch : s){
        if(ch == '?') {
            temp.clear();  // Clear temp if we encounter '?'
        }
        else if(ch == '=') {
            string output(temp.begin(), temp.end());
            cout << output << ": ";
            temp.clear();
        }
        else if(ch == '&') {
            string output(temp.begin(), temp.end());
            cout << output << endl;
            temp.clear();
        }
        else {
            temp.pb(ch);
        }
    }
    string output(temp.begin(), temp.end());
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
    // cin >> t;
    while(t--) solve();

    clock_off

    return 0;
}
