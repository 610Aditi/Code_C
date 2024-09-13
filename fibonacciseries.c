#include<stdio.h>
int main() 
{ 
  int per=0,cur=1,next,n;//per=-1,cur=1
  printf("enter number of element = ");
  scanf("%d",&n);
 while(n!=0)
  { 
    printf("\t %d ",per);  //next=per+cur
    next=per+cur;      // printf statement next
    per=cur;
    cur=next;
    n=n-1;
  }
 return 0;
}