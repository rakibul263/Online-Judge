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
        vector<int> arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int profit = 0;

        for(int i = 0; i <= 105; i++){
            int sold = 0;
            for (int j = 0; j < n; j++) {
                sold += min(i, arr[j]);
            }
            int cost = i * n * 30;
            int rev = sold * 50;
            profit = max(profit, rev - cost);
        }
        cout << profit << '\n';
    }

    return 0;
}
