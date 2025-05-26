#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int n_val = stoi(s);

        if (n_val < 0) {
            cout << -1 << endl;
            continue;
        }

        int root = static_cast<int>(sqrt(n_val));

        if (root * root == n_val)
            cout << 0 << " " << root << '\n';
        else
            cout << -1 << endl;
    }
    return 0;
}