#include <bits/stdc++.h>
using namespace std;

#define int long long

const int N = 100000;

int32_t main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int arr[N];

        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        sort(arr, arr + n);

        int ans = n;
        for (int d = 0; d <= n; d++) {
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                if (arr[i] > d) cnt++;
            }
            ans = min(ans, d + cnt);
        }

        cout << ans << "\n";
    }
    return 0;
}
