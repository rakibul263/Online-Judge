#include<iostream>
using namespace std;

int main()
{
    int c1[3],p=0;

    for(int i=0;i<4;i++)
    {
        cin>>c1[i];
        if(c1[i]==1)
        {
            p+=i+1;
        }
    }
    cout<<p<<endl;

    return 0;
}
