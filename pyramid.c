#include<stdio.h>
int main()
{
    int i,j,space,n=5;
    for(i=1;i<=n;i++)
    {
        for(space=n;space>=n-i;space--) //for(space=1;space<=n-i;space++)
        {   
        printf("  ");
        }
       for(j=n;j>=2*i-1;j--)//for(j=1;j<2*i-1;j++)
        {
        printf("& ");
        }
        printf("\n");
    }
   /*int i,j,space,n=5;
    for(i=1;i<=n;i++)
    {
        for(space=1;space<=n-i;space++)
        {
            printf("  ");
        }
        for(j=n;j>=1;j--)
        {
            printf("& ");
        }
        printf("\n");
    }*/
    
    return 0;
}
