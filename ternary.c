#include<stdio.h>
int main()
{
    int a,b,c,n;
    printf("enter value of A , B:  ");
    scanf("%d %d",&a,&b);
    a%2==0?printf("no is even\n"):printf("no  is odd\n");
    c=a>b?printf("its a is greater\n"):printf("b is greater\n");
    return 0;
}