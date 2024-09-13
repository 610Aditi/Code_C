#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("enter n = ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {   printf("not prime");
            count++;
            break;
        }
    }
        if(count==0)
        {printf("prime number ");}
        
    return 0;
}