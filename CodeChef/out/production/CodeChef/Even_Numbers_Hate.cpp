#include<bits/stdc++.h>

using namespace std;

#define fast_io        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define clock_on       clock_t z = clock();
#define clock_off      z = clock() - z;  cerr << "Run Time : " << static_cast<double>(z) / CLOCKS_PER_SEC << " seconds" << endl;
#define int            long long int
#define double         long double
#define endl           "\n"
#define pb             push_back
#define vi             vector<int>
#define print(a)       for(auto x : a) cout << x << " "; cout << endl

void solve() {
    int n;
    cin >> n;

    vi A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    vi odd, even;
    for (int i = 0; i < n; i++) {
        if (A[i] % 2 == 0) even.pb(A[i]);  // Collecting even numbers
        else odd.pb(A[i]);  // Collecting odd numbers
    }

    int odd_count = 0, sum = 0;

    // Add odd numbers first
    for (int i = 0; i < odd.size(); i++) {
        sum += odd[i];
        if (sum % 2 != 0) odd_count++;  // If sum is odd, increment odd count
    }

    // Then add even numbers
    for (int i = 0; i < even.size(); i++) {
        sum += even[i];
        if (sum % 2 != 0) odd_count++;  // If sum is odd, increment odd count
    }

    cout << odd_count << endl;  // Output the maximum number of odd prefix sums
}

int32_t main() {

    fast_io

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

clock_on

    int t;
    cin >> t;  // Number of test cases
    while (t--) solve();

clock_off

    return 0;
}
