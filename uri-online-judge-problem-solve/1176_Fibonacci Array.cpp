#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int N[60];
    int n;
    N[0]=0;
    N[1]=1;
    for(int i=2;i<=60;i++)
    {
        N[i]=N[i-1]+N[i-2];
    }
    cin>>n;
    int k;
    for(int j=0;j<n;j++)
    {
        cin>>k;
        cout<<"Fib("<<k<<")"<<" = "<<N[k]<<endl;
    }
    return 0;
}
