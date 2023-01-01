#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int q,w,e,r,t;
    q=a+b;
    w=a-b;
    e=a*b;
    r=a/b;
    t=a%b;
    printf("Sum:%d",q);
    printf("
Difference:%d",w);
    printf("
Product:%d",e);
    printf("
Quotient:%d",r);
    printf("
Remainder:%d",t);
}