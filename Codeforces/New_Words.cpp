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
    getline(cin, s);
    
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    string given = "egypt";
    int j = 0;
    vi temp;

    for(int i=0;i<s.size();i++){
        for(int k=i;k<s.size();k++){
            if(s[k] == given[j]){
                temp.pb(s[k]);
                j++;
            }
        }
    }

    int count = 0;
    if(temp.size() == given.size()){
        count++;
        temp.clear();
    }
    
    cout<<count<<endl;

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