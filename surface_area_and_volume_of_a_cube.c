#include<stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
    int area,volume;
    area=6*a*a;
    volume=a*a*a;
    printf("Surface area = %d",area);
    printf(" and Volume = %d",volume);
}