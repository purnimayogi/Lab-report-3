#include<stdio.h>
int main()
{
 int n,i,x;
 for(n=100;n<=200;n++)
 {
 x=0;
 for(i=2;i<=n/2;i++)
 {
 if(n%i==0)
 {
 x=1;
 break;
 }
 }
 if(x==0)
 printf("%d ",n);
 }
 return 0;
}
