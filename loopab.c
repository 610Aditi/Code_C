#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter number of time do want to print = " );
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %c ",64+j);//96
        }
        printf("\n");
    }
    
    return 0;
}

