#include<stdio.h>
int main()
{
    int n,b;
    printf("Enter any number:");
    scanf("%d",&n);
    while(n>0)
    {
        b++;
        n = n/10;
    }
    printf("No. of digits = %d", b);
}
