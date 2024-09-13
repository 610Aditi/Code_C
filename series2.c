#include<stdio.h>
int main()
{
    int i,n;
    printf("enter num under 50 : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d",i);
        if(i%2!=0)
        {
        if(i<n)
        printf(" - ");
        }
        else
        printf(" + ");
    }
}