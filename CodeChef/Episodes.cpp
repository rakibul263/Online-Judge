#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;
        int total_time = a * b;
        cout << total_time/60 << " " << total_time%60 << '\n';
    }

    return 0;
}