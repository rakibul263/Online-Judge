#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    int rec_area = a * b;
    int sqr_area = c * c;

    if(rec_area == sqr_area){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
    return 0;
}