#include<stdio.h>
int main()
{
    int n,r;
    scanf("%d",&n);
    r=n%3;
    if(r==0)
    printf("NORMAL");
    else if(r==1)
    printf("HUGE");
    else if(r==2)
    printf("SMALL");
}