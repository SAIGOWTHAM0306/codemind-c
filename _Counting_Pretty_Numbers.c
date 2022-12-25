#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int  l,r,q,j,c=0;
        scanf("%d%d",&l,&r);
        for(j=l;j<=r;j++)
        {
            q=j%10;
            if(q==2||q==3||q==9)
            {
            c++;
            }
        }
        printf("%d
",c);
    }
}