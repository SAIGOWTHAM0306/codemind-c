#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    float area;
    area=((a+b)/2)*c;
    printf("%.4f",area);
}