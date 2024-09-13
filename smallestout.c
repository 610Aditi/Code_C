#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nenter a,b,c");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b&&a<c)
    {printf("a is smaller");}
    else if(b<c&&b<a)
    {printf("b is smaller");}
    else
    {printf("c is smaller");}
    return 0;
}