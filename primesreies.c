#include<stdio.h>
int main()
{
    int  n,i,count,num,sum=0;
    printf("enter range = ");
    scanf("%d",&n);
    printf("the prime number in between the range 1 to %d\n",n);

    for(num=1;num<=n;num++)
    {   count=0;
        for(i=2;i<=num/2;i++)
        {
            if(num%i==0)
          { count++;
            break;
          }
        }
    if(count==0&&num!=1)
        printf("  %d ",num);
    }
    return 0;
}
