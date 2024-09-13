#include<stdio.h>
int main()
{
    int i,j,n=3;
    for(i=1;i<=2*n;i++)
    {  
      for(j=1;j<=n;j++)
      {
        if(j>=4-i)
        {
            printf("* ");
        }
      }
      printf("\n");
    }
    
    return 0;
}
