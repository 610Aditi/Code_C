#include<stdio.h>
int main()
{
    int a=100,b=200,c=300,d=400,e;
    e=(a>b?(a>c?(a>d?a:d):c):(b>c?(b>d?b:d):(c>d?c:d)));
    printf("NO IS GREATER %d",e);
    return 0;
}   

