#include<stdio.h>
int main()
{
	int A, B, C,req,l;
	scanf("%d %d %d", &A, &B, &C);

	if (A < B && A < C)
		l=A;

	else if (B < A && B < C)
		l=B;

	else
		l=C;
  req=A+B+C-l;
  printf("%d",req);
	return 0;
}

