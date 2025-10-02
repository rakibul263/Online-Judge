#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int>v(m + 1, -1);

        for(int i = 1; i <= n; i++){
            int ty;
            cin >> ty;
            v[ty] = 1;
        }
        int zero_value_number = 0;
        for(int i = 1; i <= m; i++){
            if(v[i] == -1){
                zero_value_number++;
            }
        }
        cout << zero_value_number << '\n';
    }

    return 0;
}