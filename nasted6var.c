#include<stdio.h>
int main()
{
    int a=100,b=200,c=300,d=400,e=500,f;
    f=(a>b?(a>c?(a>d?(a>e?a:e):d):c):(b>c?(b>d?(b>e?b:e):d):(c>d?(c>e?c:e):(d>e?d:e))));
    printf("NO IS GREATER %d",f);
    return 0;
}