#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main(){
    int n;
    cin>>n;

    if(n%2==0)
        cout<<n/2<<endl;

    else{
        int re = (n-1)/2-n;
        cout<<re<<endl;
    }
    return 0;
}