#include<stdio.h>
int main()
{
    int i,sum=0,n,count=0,k;
    printf("enter last : ");
    scanf("%d",&n);
    for(k=1;k<=n;k++)
    {
        count=0;
        for(i=2;i<=k/2;i++)
         { if(k%i==0)
          {
            count++;
            break;
          }
         }
    if(count==0&&k!=1)
    {   printf("%d ",k); }
       sum=sum+i;
       
       sum++;
    }
    printf("\nsum is %d",sum);
    return 0;
}
