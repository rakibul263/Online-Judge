#include <iostream>
using namespace std;

#define int long long

int32_t main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;
        int k = 0;
        while ((1LL << (k + 1)) <= x) {
            k++;
        }
        cout << 2 * k + 3 << '\n';
    }
    return 0;
}