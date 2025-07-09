#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int count1 = 0;
        int count2 = 0;

        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            if (a == 1) {
                count1++;
            } else {
                count2++;
            }
        }

        if (count1 % 2 == 0) {
            cout << min(count2, count1 / 2) << '\n';
        } else {
            cout << count2 << '\n';
        }
    }

    return 0;
}
