#include <bits/stdc++.h>
using namespace std;

#define int long long

const int mod = 998244353;

int32_t main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int result = 1;
        for (int i = 0; i < n; i++) {
            int total_ways = a[i] - i;
            if (total_ways <= 0) {
                result = 0;
                break;
            }
            result = (result * total_ways) % mod;
        }

        cout << result << '\n';
    }

    return 0;
}
