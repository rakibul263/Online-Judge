#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    if(b >= 3*a){
        cout << "Rain" << '\n';
    }else{
        cout << "Dry" << '\n';
    }

    return 0;
}