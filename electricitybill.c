#include<stdio.h>
int main()
{
    int LM,CM,unit,total,amount;
    printf("\nenter the reading :");
    scanf("%d %d",&LM,&CM);
    total=CM-LM;
    printf("\ntotal is =%d",total);
    if(total>0&&total<=100)
    {   
    unit=2;
    printf("charge Rs=2/unit");
    } 
    else if(total>101&&total<=200)
    {   
    unit=3;
    printf("charge Rs=3/unit");}
    else if(201<total<=300)
    {
    unit=4;
    printf("charge Rs=4/unit");
    }
    else if(301<total<=400)
    {   
    unit=5;
    printf("charge Rs=5/unit");
    }
    else
    {
    printf("charge Rs=8/unit");
    } 
    amount=total*unit;

    printf("\namount is = %d",amount);

    return 0;
}