#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for (i=0;i<pow(2,n);i++)
    {
        for (j = n - 1; j >= 0; j--){
            printf("%d", (i & (1 << j)) ? 1 : 0);
        }
        printf("
");
    }
    return 0;
}