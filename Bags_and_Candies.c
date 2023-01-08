#include<stdio.h>
int main()
{
   int n,m,k,r,req;
   scanf("%d%d%d",&n,&m,&k);
   r=n%(m*k);
   req=n/(m*k);
   if(r==0)
   {
       printf("%d",req);
   }
   else
   {
       printf("%d",req+1);
   }
}