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
#define arr_in(n)      int arr[n]; for(int i=0;i<n;i++) cin>>arr[i];
#define lp(n)          for(int i=0;i<n;i++)
// #define Tetrahedron    4
// #define Cube           6
// #define Octahedron     8
// #define Dodecahedron   12
// #define Icosahedron    20

int solve(){
    string s;
    cin>>s;
    int sum = 0;
    if(s == "Tetrahedron") sum += 4;
    if(s == "Cube") sum += 6;
    if(s == "Octahedron") sum += 8;
    if(s == "Dodecahedron") sum += 12;
    if(s == "Icosahedron") sum += 20;

    return sum;
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
    int sum =0;
    while(t--) {
        int n = solve();
        sum += n;
    }
    cout<<sum<<endl;



clock_off

    return 0;
}