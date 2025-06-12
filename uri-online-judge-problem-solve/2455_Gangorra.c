#include<stdio.h>

int main()
{
    int p1,c1,p2,c2;
    scanf("%d %d %d %d",&p1,&c1,&p2,&c2);

    int a=p1*c1;
    int b=p2*c2;

    if(a==b)
        printf("0\n");
    else if(a<b)
        printf("1\n");
    else
        printf("-1\n");
    return 0;
}
