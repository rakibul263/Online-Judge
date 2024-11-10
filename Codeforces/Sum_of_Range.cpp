/***** Preprocessor Directive *****/
#include<bits/stdc++.h>

using namespace std;

/***** Macros -> Symbolic Constants *****/
#define fast_io        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define clock_on       clock_t z = clock();
#define clock_off      z = clock() - z;  cerr << "Run Time : " << static_cast<double>(z) / CLOCKS_PER_SEC << " seconds" << endl;
#define ll             long long int
#define double         long double
#define endl           "\n"
#define pb             push_back
#define vi             vector<int>
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define arr_in(n)      int arr[n]; for(int i=0;i<n;i++) cin>>arr[i];
#define lp(n)          for(int i=0;i<n;i++)

void solve(){
    ll a, b;
    cin>>a>>b;

    if(a>b)
        swap(a, b);
    //fist part
    ll sum=(b-a+1)*(a+b)/2;
    cout<<sum<<endl;

    //second part
    ll count = ((b-a)/2)+1;

    ll first_even, last_even;
    if(a%2==0)
        first_even=a;
    else
        first_even=a+1;

    if(b%2==0)
        last_even=b;
    else
        last_even=b-1;

    ll sum_even;
    if(first_even == last_even)
        sum_even = first_even;
    else
        sum_even = count*(first_even+last_even)/2;
    cout<<sum_even<<endl;

    //third part
    ll first_odd, last_odd;
    if(a%2==0)
        first_odd=a+1;
    else
        first_odd=a;
    
    if(b%2==0)
        last_odd=b-1;
    else
        last_odd=b;

    ll sum_odd;
    if(first_odd == last_odd)
        sum_odd = first_odd;
    else
        sum_odd = count*(first_odd+last_odd)/2;

    cout<<sum_odd<<endl;
    
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