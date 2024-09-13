#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value a,b : ");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("\nvalue of a=%d",a);
    printf("\nvalue of b=%d",b);
    
}