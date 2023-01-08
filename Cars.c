#include<stdio.h>
int main()
{
   int n,r,req;
   scanf("%d",&n);
   r=n%4;
   req=n/4;
   if(r==0)
   {
       printf("%d",req);
   }
   else
   {
       printf("%d",req+1);
   }
}