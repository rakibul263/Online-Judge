#include <bits/stdc++.h>
using namespace std;

int main(){
    int r, b, p, q;
    cin >> r >> b >> p >> q;

    if(r*p > b*q){
        cout << r*p << '\n';
    }else{
        cout << b*q << '\n';
    }
    return 0;
}