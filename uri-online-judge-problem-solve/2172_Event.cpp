#include<iostream>
using namespace std;

int main()
{
    int x;
    long long m;



    while(1)
    {
        cin>>x>>m;
        if(x==0 && m==0)
        {
            break;
        }
        else
            cout<<x*m<<endl;
    }

    return 0;
}
