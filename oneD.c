#include<stdio.h>
int main()
{
 int a[10]={11,22,33,22,55,22,77,77,33,44},i,j,c,count;

 for(i=0;i<=9;i++)
 {
    c=a[i];
     for(j=0;j<=9;j++)
    {
      if(c==a[j])
       {
        count++;
        a[j]=0;
       }
    }
    if(c!=0)
    printf("\n\n%d-%d",c,count);
    count=0;
 }
return 0;
}