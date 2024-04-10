#include<iostream>
using namespace std;

int main()
{
    int k;
    cin>>k;

    if(k==1)
        cout<<"Top "<<1<<endl;
    else if(1<k&&k<=3)
        cout<<"Top "<<3<<endl;
    else if(3<k&&k<=5)
        cout<<"Top "<<5<<endl;
    else if(5<k&&k<=10)
        cout<<"Top "<<10<<endl;
    else if(10<k&&k<=25)
        cout<<"Top "<<25<<endl;
    else if(25<k&&k<=50)
        cout<<"Top "<<50<<endl;
    else if(50<k&&k<=100)
        cout<<"Top "<<100<<endl;

    return 0;
}
