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

int calculateFibonacciness(int a1, int a2, int a3, int a4, int a5) {
    int count = 0;
    if (a3 == a1 + a2) count++;
    if (a4 == a2 + a3) count++;
    if (a5 == a3 + a4) count++;
    return count;
}


void solve(){
    int a1, a2, a4, a5;
    cin >> a1 >> a2 >> a4 >> a5;

    int maxFibonacciness = 0;

    int possible_a3_1 = a4 - a2;
    int possible_a3_2 = a5 - a4;

    maxFibonacciness = max(maxFibonacciness, calculateFibonacciness(a1, a2, possible_a3_1, a4, a5));
    maxFibonacciness = max(maxFibonacciness, calculateFibonacciness(a1, a2, possible_a3_2, a4, a5));

    maxFibonacciness = max(maxFibonacciness, calculateFibonacciness(a1, a2, a1 + a2, a4, a5));

    cout << maxFibonacciness << endl;
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