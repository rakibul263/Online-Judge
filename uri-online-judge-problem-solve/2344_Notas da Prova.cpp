#include<iostream>
using namespace std;

int main()
{
    int N;

    cin>>N;

    if(N==0)
        cout<<"E"<<endl;
    else if(1<=N&&N<=35)
        cout<<"D"<<endl;
    else if(36<=N&&N<=60)
        cout<<"C"<<endl;
    else if(61<=N&&N<=85)
        cout<<"B"<<endl;
    else if(86<=N&&N<=100)
        cout<<"A"<<endl;


    return 0;
}
