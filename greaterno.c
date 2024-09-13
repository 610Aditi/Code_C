#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nenter values a,b,c : ");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b&&a>c)
    {
    printf("\na is greater");
    }
    else if(b>c&&b>a)
    {
    printf("\nb is greater");
    }
    else if(c>a&&c>b)
    {
    printf("\nc is greater");
    }
    else
    {
    printf("\nall are equal");
    }
    return 0;
}