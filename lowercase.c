#include<stdio.h>
int main()
{
    char c;
    printf("\nenter the character:  ");
    scanf(" %c ",&c);
    if(c>64&&c<91)
    {
    printf("its uppercase");
    }
    else
    {
    printf("lowercase");
    }
    
    return 0;
}