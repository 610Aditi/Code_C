#include<stdio.h>
#include<conio.h>

void main()
{
    int i,E,pos,n;
    int a[100];
    printf("\nenter on of elements ");
    scanf("%d",&n);

    printf("\nenter element");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
      
    printf("\nenter elements to insert ");
    scanf("%d",&E);

    printf("\nenter position of elements ");
    scanf("%d",&pos);


    for(i=n-1;i>pos-1;i++)
    {   
       a[i+1]=a[i];
    }
    a[pos-1]=E;
    printf("\n new array is");
    for(i=0;i<=n;i++)
    {
    printf("\n%d",a[i]);
    }
    getch();
}
