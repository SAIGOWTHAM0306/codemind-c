#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    c=a+b;
    d=21-c;
    if(d<=10)
    {
        printf("%d",d);
    }
    else
    {
        printf("-1");
    }
}