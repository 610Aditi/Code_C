#include<stdio.h>
int main()
{
    int r,m,n,sum;
    printf("enter n ");
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
       r=n%10;
       sum=sum*10+r;
       n=n/10; 
    }
    if(sum==m)
    printf("palindrom num");
    else
    printf("not palindrom");
    return 0;
}
