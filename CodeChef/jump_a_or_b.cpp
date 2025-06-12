#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int t;
    cin >> t;

    while(t--){
        int n, m, a, b;
        cin >> n >> m >> a >> b;

        int differance_between_a_and_b = a - b;
        int total_length_of_jump = b * n;


        if(((m - total_length_of_jump) % differance_between_a_and_b) == 0){
            int integer_number = (m - total_length_of_jump) / differance_between_a_and_b;
            if(integer_number >= 0 and integer_number <= n){
                cout << "Yes" << '\n';
            }else{
                cout << "No" << '\n';
            }
        }else{
            cout << "No" << '\n';
        }
    }

    return 0;
}