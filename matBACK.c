#include<stdio.h>
int main()
{
 int a[3][3]={11,22,33,44,55,66,77,88,99},i,j;

 for(i=0;i<=2;i++)
 {
    for(j=0;j<=2;j++)
    {   
        if(i==j)//if(i==j||i+j==2)or  if(i==j&&i+j==2)or  if(i+j==2)     
        printf(" \t%d     ",a[i][j]); //i,i
        else
        printf("--");
    }
    printf("\n\n");
 }
 return 0;
 }
