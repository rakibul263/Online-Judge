#include<bits/stdc++.h>
#define int long long int

using namespace std;

int32_t main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string num1, num2, result = "";
    cin>>num1>>num2;

    for(int i=0;i<num1.length();i++){
        if(num1[i]==num2[i]){
            result+='0';
        }else{
            result+='1';
        }
    }
    cout<<result<<endl;

    return 0;
}