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
        string s;
        cin >> s;

        int alice_win = 0, bob_win = 0;
        for(char ch : s){
            if(ch == '1'){
                alice_win++;
            }else{
                bob_win++;
            }
        }
        int rem = a - b;
        int dif = abs(alice_win - bob_win);

        if(dif <= rem && (rem - dif) % 2 == 0){
            cout << "Yes" << '\n';
        }
        else{
            cout << "No" << '\n';
        }
    }

    return 0;
}