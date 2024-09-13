#include<stdio.h>
int main()
{
    float area,r;
    const float PI=3.14;
    printf("\nenter the radius :");
    scanf("%f",&r);
    area=PI*r*r;
    printf("\narea is %f",area);
    return 0;
    }