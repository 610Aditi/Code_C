#include<stdio.h>
void main()
{
int a[10],i,*p;
printf("enter 10 array element");
for(i=0;i<=9;i++)
{
scanf("\n%d",&a[i]);
}
printf("\nbefore increment position : ");
printf("\n%p ",p);
p=&a[0];
for(i=0;i<=9;i++)
{
printf("\n%d",*p);
p++;
}
printf("\nafter increment position : ");
printf("\n%p ",p);
return 0;
}