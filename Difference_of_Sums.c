#include<stdio.h>
int main()
{
    int n,sum=0,i,sqr,diff;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*i;
    }
    sqr=((n*(n+1))/2)*((n*(n+1))/2);
    diff=sqr-sum;
    printf("%d",diff);
}