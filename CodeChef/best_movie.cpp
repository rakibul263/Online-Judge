#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        long long minimum = 10e8;
        for(int i = 0; i < n; i++){
            int a, b;
            cin >> a >> b;
            if(a >= 7){
                if(minimum > b){
                    minimum = b;
                }
            }
        }

        if(minimum == 10e8){
            cout << -1 << '\n';
        }else{
            cout << minimum << '\n';
        }
    }

    return 0;
}