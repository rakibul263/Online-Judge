#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n + 1), b(n + 1);

        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }

        for(int i = 1; i <= n; i++){
            cin >> b[i];
        }

        int max_value = -1e5;
        for(int k = 0; k <= 102; k++){
            int sum_taste = 0;
            for(int i = 1; i <= n; i++){
                if(b[i] <= k && a[i] > 0){
                    sum_taste += a[i];
                }
            }
            max_value = max(max_value, sum_taste - k);
        }
        cout << max_value << '\n';
    }

    return 0;
}
