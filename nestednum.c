#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter how many time to you want to print the number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      for(j=1;j<=i;j++)
      { 
        printf("%d ",j);//,i  
      }
      printf("\n");
    }
    return 0;
}
