#include<iostream>
using namespace std;

int main()
{
    int p1,c1,p2,c2;
    cin>>p1>>c1>>p2>>c2;

    int a=p1*c1;
    int b=p2*c2;

    if(a==b)
        cout<<"0"<<endl;
    else if(a<b)
        cout<<"1"<<endl;
    else
        cout<<"-1"<<endl;
    return 0;
}
