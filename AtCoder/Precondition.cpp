#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    for (int i = 1; i < s.length(); i++) {
        if (isupper(s[i])) {
            if (t.find(s[i - 1]) == string::npos) {
                cout << "No" << '\n';
                return 0;
            }
        }
    }
    cout << "Yes" << '\n';

    return 0;
}
