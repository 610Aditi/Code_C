#include<stdio.h>
int main()
{
 int a[3][3]={11,22,33,44,55,66,77,88,99},i,j;

 for(i=0;i<=2;i++)
 {
    for(j=0;j<=2;j++)
    {
        printf(" \t%d     ",a[i][j]);
    }
    printf("\n");
    for(j=0;j<=2;j++)
    {
        printf("  \ta[%d][%d]",i,j);
    }
    printf("\n");
for(j=0;j<=2;j++)
    {
        printf("\t%p",&a[i][j]);
    }
    printf("\n\n");
 }
return 0;
}