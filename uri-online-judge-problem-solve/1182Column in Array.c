#include <stdio.h>
int main()
{
    double sum=0.0, M[12][12];
    char T[2];
    int C,x,y;
    scanf("%d", &C);
    scanf("%s", &T);
    for(x=0;x<=11;x++)
    {
        for(y=0; y<=11; y++)
        {
        scanf("%lf", &M[x][y]);
        if(y==C)
            sum+=M[x][y];
        }
    }
    if(T[0]=='S')
        printf("\n%.1lf\n",sum);
    else if(T[0]=='M')
    {
            sum=sum/12.0;
        printf("%.1lf\n",sum);
    }
    return 0;
}
