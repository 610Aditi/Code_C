#include<stdio.h>
int main()
{
    int M,P,C,H,E,avarage,sum,per;
    printf("\nenter the marks M,P,C,H,E:");
    scanf("%d %d %d %d %d",&M,&P,&C,&H,&E);
    sum=M+P+C+H+E;
    printf("\nsum=%d",sum);
    avarage=sum/2;
    printf("\navarage is %d",avarage);
    per=sum/5;
    printf("\npercentage is %d",per);
    if(per>90&&per<100)
    printf(" A+ ");
    
    else if(per>80&&per<=90)
    printf(" A ");
    
    else if(per>70&&per<=80)
    printf(" B+ ");

    else if(per>60&&per<=70)
    printf(" B ");

    else if(per>50&&per<=60) 
    printf(" C+ ");

    else if(per>40&&per<=50)
    printf(" C ");

    else if(per>33&&per<=40)
    printf(" D ");

    else
    printf(" fail ");

    return 0;
}