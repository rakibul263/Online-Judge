#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int z = 0;
        for (char c : s) {
            if (c == '0') z++;
        }
        int o = n - z;

        int p = n / 2;
        int bp = p - k;

        if (z < bp || o < bp) {
            cout << "NO\n";
            continue;
        }

        int rz = z - bp;
        int ro = o - bp;

        int gpz = rz / 2;
        int gpo = ro / 2;

        int tg = gpz + gpo;

        if (tg >= k) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
