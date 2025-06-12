#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define clock_on clock_t z = clock();
#define clock_off z = clock() - z; cerr << "Run Time : " << static_cast<double>(z) / CLOCKS_PER_SEC << " seconds" << endl;
#define int long long int
#define double long double
#define endl "\n"
#define pb push_back
#define vi vector<string>
#define print(a) for(auto x : a) cout << x << " "; cout << endl

void solve(){
        int n;
        cin >> n;
        vi s(3);
        int ze[3] = {0,0,0};
        for(int i = 0; i < 3; i++){
            cin >> s[i];
            for(char c : s[i])
                if(c == '0') ze[i]++;
        }

        int tz = ze[0] + ze[1] + ze[2];
        if(tz != 0 && tz != n && tz != 2 * n && tz != 3 * n){
            cout << -1 << "\n";
            return;
        }
        
        if(tz == 0 || tz == 3 * n){
            cout << 0 << "\n";
            return;
        }

        int ans = 1e9;
        if(tz == n){
            for(int i = 0; i < 3; i++){
                ans = min(ans, n - ze[i]);
            }
        }

        else if(tz == 2 * n){
            for(int i = 0; i < 3; i++){
                ans = min(ans, ze[i]);
            }
        }
        cout << ans << endl;
}

int32_t main(){
    fast_io
#ifndef OnLInE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    clock_on
    int t = 1;
    cin >> t;
    while(t--) solve();
    clock_off
    return 0;
}
