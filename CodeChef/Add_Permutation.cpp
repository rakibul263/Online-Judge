#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int m = n - k + 1;

        for (int i = 1; i <= m; i++)
            cout << m - i + 1 << " ";

        for (int i = m + 1; i <= n; i++)
            cout << i << " ";
        cout << "\n";
    }

    return 0;
}