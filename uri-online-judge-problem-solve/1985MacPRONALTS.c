#include<stdio.h>
int main()
{
    int p,r;
    float q,s=0.0;
    scanf("%d",&p);
    for(int i=0;i<p;i++){
            scanf("%f %d",&q,&r);
        if(q==1001) q=1.50;
        if(q==1002) q=2.50;
        if(q==1003) q=3.50;
        if(q==1004) q=4.50;
        if(q==1005) q=5.50;

        s=s+(q*r);
    }
    printf("%.2f\n", s);

    return 0;
}
