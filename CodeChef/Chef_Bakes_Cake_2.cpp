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

        vector<int>a(n), b(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        int total_cost = 0;

        for(int i = 0; i < n; i++){
            if(a[i] > b[i]){
                total_cost += (a[i] - b[i]);
            }
        }
        cout << total_cost << '\n';
    }


    return 0;
}