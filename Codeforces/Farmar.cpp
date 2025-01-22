/***** Preprocessor Directive *****/
#include<bits/stdc++.h>

using namespace std;

/***** Macros -> Symbolic Constants *****/
#define fast_io        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define clock_on       clock_t z = clock();
#define clock_off      z = clock() - z;  cerr << "Run Time : " << static_cast<double>(z) / CLOCKS_PER_SEC << " seconds" << endl;
#define int            long long int
#define double         long double
#define endl           "\n"
#define pb             push_back
#define vi             vector<int>
#define print(a)       for(auto x : a) cout << x << " "; cout << endl

void solve(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> cards(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> cards[i][j];
        }
    }

    vector<int> p(n);
    for (int i = 0; i < n; i++) p[i] = i + 1;

    bool valid = true;

    do {
        int topCard = -1;
        valid = true;

        for (int round = 0; round < m && valid; round++) {
            for (int i = 0; i < n && valid; i++) {
                int cow = p[i] - 1;
                auto it = upper_bound(cards[cow].begin(), cards[cow].end(), topCard);
                if (it == cards[cow].end()) {
                    valid = false;
                    break;
                }
                topCard = *it;
                cards[cow].erase(it);
            }
        }

        if (valid) break;

    } while (next_permutation(p.begin(), p.end()));

    if (valid) {
        for (int i = 0; i < n; i++) cout << p[i] << " ";
        cout << endl;
    } else {
        cout << -1 << endl;
    }
}

/*****Main Function*****/
int32_t main(){

    fast_io

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

clock_on

    int t = 1;
    cin>>t;
    while(t--) solve();




clock_off

    return 0;
}