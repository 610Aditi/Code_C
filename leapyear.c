#include<stdio.h>
int main()
{
    int a;
    printf("enter the year ");
    scanf("%d",&a);
    if(a%400==0)
    {
    printf("year is leap",a);
    }
    else if(a%100==0)
    {
    printf("year is not leap year",a);
    }
    else if(a%4==0)
    {
    printf("%d is leap year",a);
    }
    else
    {
    printf("not leap");
    }
    return 0;
}