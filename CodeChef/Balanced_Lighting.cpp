#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vector<int> a(n);

        int count_red_color = 0, count_blue_color = 0, count_uncolored = 0;

        for(int i = 0; i < n; i++){
            cin >> a[i];

            if(a[i] == 1){
                count_red_color++;
            }else if(a[i] == 2){
                count_blue_color++;
            }else{
                count_uncolored++;
            }
        }

        int differance = abs(count_red_color - count_blue_color);

        if(differance > count_uncolored){
            cout << "No" << '\n';
        }else if((count_uncolored - differance) % 2 != 0){
            cout << "No" << '\n';
        }else{
            cout << "Yes" << '\n';
        }
    }

    return 0;
}