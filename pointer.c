#include<stdio.h>
void main()
{
    int x;
    printf("enter number : ");
    scanf("%d",&x);
    int *p,**q;
    p=&x;
    q=&p;
    printf("\nvalue of x is %d\n",x);
    printf("\naddress of x is %p\n",&x);
    printf("\naddress of x is %d\n",*(&x));
    printf("\nvalue of p  is %p\n",p);
    printf("\naddress of p is %p\n",&p);

    printf("\nvalue of x is %p\n",*(&p));

    printf("\nvalue of x using p is %d\n",*p);
    printf("\nvalue of q is %p\n",q);
    printf("\naddress of q is %p\n",&q);  
    printf("\nvalue of p using  q is %p\n",*q);
    printf("\nvalue of x using q is %p\n",**q);
    return 0;}
