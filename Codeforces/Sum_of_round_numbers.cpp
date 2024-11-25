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

void solve(){
    int n;
        cin >> n;
        vector<int> round_numbers;
        int place_value = 1;

        while (n > 0) {
            if (n % 10 > 0) {
                round_numbers.push_back((n % 10) * place_value);
            }
            n /= 10;
            place_value *= 10;
        }

        cout << round_numbers.size() << endl;
        for (int num : round_numbers) {
            cout << num << " ";
        }
        cout << endl;
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