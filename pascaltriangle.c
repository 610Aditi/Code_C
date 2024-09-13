#include<stdio.h>
int main()
{
    int i,j,space,value,n;
    printf("enter number between 10 : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
     {
        for(space=1;space<=n-i;space++)
        { printf("   ");}
        for(j=1;j<=i;j++)
        {
            if(j==1||i==1)
            {value=1;}
            else
            {value=value*(i-j+1)/(j-1);}
            printf("%6d",value);
        }
        printf("\n");
     }
     return 0;
}
