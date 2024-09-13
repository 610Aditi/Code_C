#include<stdio.h>
 int main()
 {
    int i,j,n;
    printf("enter the num under 15 = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" X ");
            if(j<i)
            printf("*");
        }
        if(i<n)
        printf("+");
    }
    return 0;
 }

