#include<stdio.h>
int main()
{
  int i,j,space,n=5;
    for(i=1;i<=n;i++)
    {
       /*for(space=1;space<=n-i;space++)*/    for(space=n;space>=n-i;space--)
        {
            printf(" ");
        }
       /*for(j=1;j<=i;j++)*/  for(j=n;j>=i;j--)

        {
            printf("& ");
        }
       printf("\n");
    }
    return 0;
    }
