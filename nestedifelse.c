#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the 4 number :");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b)
    {
     if(a>c)
      {
        if(a>d)
        {printf("a is greater");}
        else
        {printf("d is greater");}
      }
        else
        {printf("c is greater ");}
    }
     else
     {
      if(b>c)
       {
        if(b>d)
        {printf("b is greater");}
        else
        {printf("d is greater");}
       }
    else
    { 
      if(c>d)
      {printf("c is greater");}
      else
      {printf("d is greater");}
    }
 }     
    return 0;
}