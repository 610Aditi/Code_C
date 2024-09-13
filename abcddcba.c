#include<stdio.h>
int main()
{
   int i,j,k,n=4;
    for(i=1;i<=n;i++)
    {   
        k='A';
        for(j=1;j<=2*n;j++)
        {   
            if(j<=5-i||j>3+i)
            {
                printf("%c",k);
                j<=n?k++:k--;
            }
            if(j==n)
            {
                k--;
            }
        }
        printf("\n");
    }
    return 0;
}
