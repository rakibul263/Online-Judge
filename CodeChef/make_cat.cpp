#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    sort(s.begin(), s.end());

    if (s == "act") {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}