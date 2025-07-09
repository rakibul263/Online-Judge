#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int odd_count = 0, even_count = 0;

        for(int i = 1; i <= n; i++){
            if(n % i == 0){
                if(i % 2 == 0){
                    even_count++;
                }else{
                    odd_count++;
                }
            }
        }
        cout << odd_count << " " << even_count << '\n';
    }
    return 0;
}