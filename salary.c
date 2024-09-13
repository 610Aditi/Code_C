#include<stdio.h>
int main()
{
    int salary,TA,DA,GS;
    printf("enter salary : ");
    scanf("%d",&salary);
    if(10000<salary<=20000)
    {
        TA=(10*salary)/100;
        DA=(5*salary)/100;
        GS=(salary+TA+DA);
    }
    else if(20000<salary<=30000)
{
    TA=(12*salary)/100;
    DA=(6*salary)/100;
    GS=(TA+DA+salary);
}
    else
    {
        TA=(15*salary)/100;
        DA=(7*salary)/100;
        GS=(TA+DA+salary);

    }
    printf("GS is %d",GS);
    return 0;
}