#include <bits/stdc++.h>
using namespace std;

bool fun(vector<int>& arr, int size, int target, int initial_value){
    return true;
}

int main(){
    int n, x;
    cin >> n >> x;

    vector<int>arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    if(fun(arr, n, x, 1)){
        cout << "YES" << '\n';
    }else{
        cout << "NO" << '\n';
    }
    return 0;
}