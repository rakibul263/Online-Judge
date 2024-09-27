#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

void solve() {
    int T;
    cin >> T;
    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;
        if ((A + B) / 2.0 > C) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int32_t main() {
    fast_io
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}
