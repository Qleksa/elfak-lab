#include "stdio.h"

void promeni(int* x, int* y)
{
	int p;
	p = *x;
	*x = *y;
	*y = p;
}

void main() 
{
	int a, b, c;

	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	printf("c = ");
	scanf("%d", &c);

	promeni(&b, &c);
	promeni(&a, &c);

	printf("%d %d %d", a, b, c);
}