#include<stdio.h>
int main()
{
    int array[10],i,key=20;
    printf("\nenter values : ");
    for(i=0;i<10;i++)
    {
    scanf("%d",&array[i]);
    }
    for(i=0;i<10;i++)
    {
    printf("%d ",array[i]);
    }
    
    for(i=0;i<10;i++)
    {
      if(array[i]==key)
      {
      printf("array[%d]",i);
      }
    }
    return 0;
}