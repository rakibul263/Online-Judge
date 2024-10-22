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
#define arr_in(n)      int n; cin>>n; int arr[n]; for(int i=0;i<n;i++) cin>>arr[i];
#define lpi(n)          for(int i=0;i<n;i++)
#define lpj(n)          for(int j=0;j<n;j++)
#define swp(i,j)        swap(arr[i], arr[j]);

void solve(){
    arr_in(n);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swp(i,j)
            }
        }
    }
    lpi(n){
        cout<<arr[i]<<" ";
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