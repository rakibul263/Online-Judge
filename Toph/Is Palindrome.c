
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i,len,flag=0;
    gets(str);

    len=strlen(str);

    for(i=0; i<=len; i++)
    {
        if(str[i]!=str[len-i-1])
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
