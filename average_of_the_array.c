#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],sum=0,i;
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
       sum=sum+a[i];
    }
     float avg=(float)sum/(float)n;
     printf("%.2f",avg);
}