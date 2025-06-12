#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+9;
int a[N];

int32_t main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        int min_len = INT_MAX;

        for (int i = 0; i < n; i++) {
            set<int> s;
            for (int j = i; j < n; j++) {
                s.insert(a[j]);
                if (s.size() > 2) break;
                if (s.size() == 2) {
                    min_len = min(min_len, j - i + 1);
                }
            }
        }
        if (min_len == INT_MAX)
            cout << -1 << '\n';
        else
            cout << min_len << '\n';
    }

    return 0;
}
