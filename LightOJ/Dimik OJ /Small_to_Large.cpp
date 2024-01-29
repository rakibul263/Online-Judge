#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a, b, c;
        cin>>a>>b>>c;
        vector<int>v = {a,b,c};
        sort(v.begin(), v.end());
        cout<<"Case "<<i<<": ";
        for(int val : v)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}
