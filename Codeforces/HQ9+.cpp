#include<bits/stdc++.h>

using namespace std;

#define fast_io        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define clock_on       clock_t z = clock();
#define clock_off      z = clock() - z;  cerr << "Run Time : " << static_cast<double>(z) / CLOCKS_PER_SEC << " seconds" << endl;
#define int            long long int
#define double         long double
#define endl           "\n"


void solve(){

}

/*****Main Function*****/
int32_t main(){

    fast_io

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

clock_on

    int t = 1;
    // cin>>t;
    while(t--) solve();

    string s;
    cin>>s;

    int len = s.size();
    char ara[len];

    bool flag = false;
    for(int i=0;i<len;i++){
        if(ara[i] == 'H' || ara[i] == 'Q' || ara[i] == '9' || ara[i] == '+'){
            flag = true;
            break;
        }
    }

    if(flag == true)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


clock_off

    return 0;
}