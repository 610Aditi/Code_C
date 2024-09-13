#include<stdio.h>
int main()
{
   int r,m,n;
   printf("\nenter the n : ");
   scanf("%d %d",&m,&n);
   while(n!=0)
   {
      r=m%n;
     // if(m%n==0)
     // {r=1;}
      m=n;
      n=r;
   }
   printf("\ngreatest common divisor is =%d",m);
   return 0;
}
