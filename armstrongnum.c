#include<stdio.h>
#include<math.h>
int main()
{
    int r,s,n,m,sum=0,len=0;
    printf("enter n : ");
    scanf("%d",&n);
    m=n;
    do    //while without terminater
    {
    len++;
    m=m/10;
    }
    while(m!=0);    // skip this step in while looping
    s=n;
    do
    {
    r=s%10;
    sum=sum+pow(r,len);
    s=s/10;
    }
     while(s!=0);
    if(sum==n)
    printf("\nnum is armstrong");
    else
    printf("\nnot armstrong no");
    return 0;
}
