#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> sums;
        bool found = false;

        for (int i = 0; i < n; i++) {
            int x = a[i];
            vector<int> new_sums;

            for (int s : sums) {
                new_sums.push_back(s + x);
            }

            new_sums.push_back(x);

            for (int s : new_sums) {
                if (s % 3 == 0) {
                    found = true;
                    break;
                }
                sums.push_back(s);
            }

            if (found) break;
        }

        if (found) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}
