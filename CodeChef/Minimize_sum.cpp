#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;

        map<int, int> mp;

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            mp[x]++;
        }

        int min = LLONG_MAX;
        for (int k = 0; k < m; k++) {
            long long curr_sum = 0;

            for (auto [val, count] : mp) {
                int new_val = (val + k) % m;
                curr_sum += 1LL * new_val * count;
            }
            if (curr_sum < min) {
                min = curr_sum;
            }
        }
        cout << min << '\n';
    }

    return 0;
}