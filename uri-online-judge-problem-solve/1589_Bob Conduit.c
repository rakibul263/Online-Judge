#include<stdio.h>
int main()
{
    int x;
    long long int m,n;

    scanf("%d",&x);
    for(int i=0;i<x;i++)
    {
        scanf("%lld %lld",&m,&n);
        printf("%lld\n",m+n);
    }
    return 0;
}
