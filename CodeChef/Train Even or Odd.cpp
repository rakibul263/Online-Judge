#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int arr[n];

        for(int i = 1; i <= n; i++){
            cin >> arr[i];
        }

        int odd_sum = 0;
        for(int i = 1; i <= n; i+=2){
            odd_sum += arr[i];
        }

        int even_sum = 0;
        for(int i = 2; i <= n; i+=2){
            even_sum += arr[i];
        }

        if(even_sum > odd_sum){
            cout << even_sum << '\n';
        }else{
            cout << odd_sum << '\n';
        }
    }
    return 0;
}