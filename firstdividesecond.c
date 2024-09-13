#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a,b");
    scanf("%d%d",&a,&b);
    if(a%b==0)
    {printf("the no is divisible");}
    else 
    {printf("not divisble");}
    
    return 0;
}