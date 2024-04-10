#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double N[12][12];
    char ch;
    double sum=0.0;

    cin>>ch;

    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin>>N[i][j];
            if(j>i)
            {
                sum+=N[i][j];
            }
        }
    }
    if(ch=='A')
        cout<<fixed<<setprecision(1)<<sum<<endl;
    else
        cout<<fixed<<setprecision(1)<<sum/66.0<<endl;

    return 0;
}
