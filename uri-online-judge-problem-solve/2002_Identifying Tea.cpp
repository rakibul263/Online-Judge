#include<iostream>
using namespace std;

int main()
{
    int n,i,a;

    cin>>n;

    int Count=0;

    for(i=0;i<5;i++)
    {
     cin>>a;
     if(n==a)
        Count++;
    }
    cout<<Count<<endl;

    return 0;
}
