#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, c;
        cin >> n >> c;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int ans = 0;
        while(true){
            int cookies = c + ans;
            int less = -1, eq = -1;
            for(int i = 0; i < n; i++){
                if(a[i] < cookies) less = 1;
                if(a[i] == cookies) eq = 1;
            }
            if(less == 1 && eq != 1){
                cout << ans << '\n';
                break;
            }
            ans++;
        }
    }
    return 0;
}
