#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        reverse(a.begin(), a.end());
        int max_v = 0;

        for (int j = 0; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (j == k) continue;
                int sum = a[j] + a[k];
                for (int i = 0; i < n; i++) {
                    if (i == j || i == k) continue;
                    max_v = max(max_v, a[i] % sum);
                    break;
                }
            }
        }
        cout << max_v << "\n";
    }

    return 0;
}
