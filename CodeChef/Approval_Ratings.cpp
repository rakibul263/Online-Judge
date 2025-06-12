#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<int> a(5);
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            cin >> a[i];
            sum += a[i];
        }

        if (sum >= 35) {
            cout << "0" << '\n';
            continue;
        }

        sort(a.begin(), a.end());

        int coins = 0;
        for (int i = 0; i < 5 && sum < 35; i++) {
            sum += (10 - a[i]);
            coins += 100;
        }

        cout << coins << '\n';
    }

    return 0;
}
