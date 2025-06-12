#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string result = "";

        for(int i = 0; i < k; i++){
            result += "1";
        }

        for (int j = 0; j < n - k; j++) {
            result += '0';
        }

        cout << result << '\n';
    }
    return 0;
}