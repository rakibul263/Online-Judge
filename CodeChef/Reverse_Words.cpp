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
#define print(a)       for(auto x : a) cout << x;
#define arr_in(n)      int arr[n]; for(int i=0;i<n;i++) cin>>arr[i];
#define lp(n)          for(int i=0;i<n;i++)
#define rv(s)          reverse(s.begin(), s.end())
#define cl(n)          n.clear()   

void solve(){
    string s;
    getline(cin, s);
    vi temp;
    for(char ch : s){
        if(ch != ' ')
            temp.pb(ch);
        else{
            rv(temp);
            print(temp);
            cout<<" ";
            cl(temp);
        }
    }

    if (!temp.empty()) {
        rv(temp);
        print(temp);
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
    // cin>>t;
    while(t--) solve();



clock_off

    return 0;
}