#include<bits/stdc++.h>
using namespace std;

#define fast_io        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define clock_on       clock_t z = clock();
#define clock_off      z = clock() - z;  cerr << "Run Time : " << static_cast<double>(z) / CLOCKS_PER_SEC << " seconds" << endl;
#define int            long long int
#define endl           "\n"

void solve(){
    string s;
    cin >> s;
    bool flag = false;

    //O(n) solution
    for (int i = 0; i < s.size() - 2; i++) {
        if ((s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0') ||
            (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1')) {
            flag = true;
            break;
        }
    }

    if (flag)
        cout << "Good" << endl;
    else
        cout << "Bad" << endl;
}

int32_t main(){
    fast_io

#ifndef ONLINE_JUDGE
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
