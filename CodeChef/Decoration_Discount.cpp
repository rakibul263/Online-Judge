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

        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int min_cost = INT_MAX;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j)
                    continue;
                int cost = a[i];
                if(i + 1 == j) cost += a[j] / 2;
                else cost += a[j];
                min_cost = min(min_cost, cost);
            }
        }

        cout << min_cost << '\n';
    }

    return 0;
}
