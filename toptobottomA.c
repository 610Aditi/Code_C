#include<stdio.h>
int main()
{
    int i,j,space,k,n;
    printf("enter length of pattern under 10 :  ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {  
      for(space=0;space<2*i;space++)
      {
        printf("  ");
      }
      {
        for(j=0;j<n-i;j++)
        k=64+j;
        printf("%c ",k);
        k++;
      }
      printf("\n");
    }
    return 0;
}