#include <bits/stdc++.h>
using namespace std;
int fac(int x)
{
    if(x>1)
        return x*fac(x-1);
    else 
        return 1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        cout<<fac(x)<<endl;
    }
    return 0;
}
