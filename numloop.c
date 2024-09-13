#include<stdio.h> 
int main()
{
    int i,j;
    for(i=1;i<=11;i++)
    {
       for(j=1;j<=11;j++)
       {
        if(i==j||j==1||i==11||j==11)
        {
            printf(" * ");
        }
        else
        {
            printf("   ");
        }
       }
     printf("\n");
    
    }
    return 0;
}

