#include <bits/stdc++.h>
using namespace std;

#define int long long

bool fun(int current, int target){
    if(current == target) return true;
    if(current > target) return false;

    return fun(current * 10, target) || fun(current * 20, target);
}

int32_t main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        if(fun(1, n)){
            cout << "YES" << '\n';
        }else{
            cout << "NO" << '\n';
        }
    }
    return 0;
}