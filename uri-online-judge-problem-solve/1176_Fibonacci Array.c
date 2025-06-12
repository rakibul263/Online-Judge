#include<stdio.h>
int main()
{
    long long int N[60];
    int n;
    N[0]=0;
    N[1]=1;

    for(int i=2;i<=60;i++)
    {
        N[i]=N[i-1]+N[i-2];
    }
    int num;
    scanf("%d",&n);
    for(int j=0;j<n;j++)
    {
        scanf("%d",&num);
        printf("Fib(%d) = %lld\n",num,N[num]);
    }
    return 0;
}
