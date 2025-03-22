#include<stdio.h>
int main()
{
    int i,j,a;
    for(i=1;i<=4;i++)
    {
        for(j=0;j<=9;j++)
        {
            a = (100*i)+(10*j)+i;
            printf("%d ", a);
        }
    }
    return 0;
}
