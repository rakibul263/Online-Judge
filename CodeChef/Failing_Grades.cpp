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
        int sum = 0;
        int lost = -1;
        for(int i = 1; i <= n; i++){
            int marks;
            cin >> marks;
            sum += marks;
            float avg = sum / i*1.0;
            if (avg < 40) {
                lost = 1;
            }
        }
        if(lost == 1){
            cout << "No\n";
        }else{
            cout << "Yes\n";
        }
    }

    return 0;
}