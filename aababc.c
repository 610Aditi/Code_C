#include<stdio.h>
int main()
{
    int i,j,n=9,k;
    for(i=1;i<=n;i++)
    {  k='A';
        for(j=n;j<=n;j--) //j=n;j<=n;j--
        {  
            if(j>=(n+1)-i)   //j>=4-i
            printf(" %c ",k);
            k++;         
        } printf("\n");
    }
     return 0;
}
