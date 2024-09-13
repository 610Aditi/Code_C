#include<stdio.h>
int main()
{
    int a=100,b=200,c=300,d;
    d=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("NO IS GREATER %d",d);
    return 0;
}   

