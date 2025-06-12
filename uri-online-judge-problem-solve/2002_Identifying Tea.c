#include<stdio.h>
int main()
{
    int n,i,a;
    scanf("%d",&n);

    int count=0;

    for(int i=1;i<=5;i++)
    {
        scanf("%d",&a);
        if(n==a)
            count++;
    }
    printf("%d\n",count);

    return 0;
}
