#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();
        if (n == 2) {
            cout << "NO" << endl;
        } else {
            bool is_perfectly_nested = true;
            int k = n / 2;
            for (int i = 0; i < k; ++i) {
                if (s[i] != '(') {
                    is_perfectly_nested = false;
                    break;
                }
            }
            if (is_perfectly_nested) {
                for (int i = k; i < n; ++i) {
                    if (s[i] != ')') {
                        is_perfectly_nested = false;
                        break;
                    }
                }
            }
            if (is_perfectly_nested) {
                cout << "NO" << '\n';
            } else {
                cout << "YES" << '\n';
            }
        }
    }
    return 0;
}