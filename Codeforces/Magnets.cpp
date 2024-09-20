#include<bits/stdc++.h>
#define int long long int

using namespace std;

int32_t main(){
    int n;
    cin >> n;
    string previous_magnet, current_magnet;
    cin >> previous_magnet;
    int groups = 1;

    for (int i = 1; i < n; ++i) {
        cin >> current_magnet;
        if (current_magnet != previous_magnet) {
            groups++;
        }
        previous_magnet = current_magnet;
    }

    cout << groups << endl;

    return 0;
}