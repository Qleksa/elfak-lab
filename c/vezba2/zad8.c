#include "stdio.h"
#include "math.h"

void main()
{
	double x0, x1=0;
	float e;
	printf("e = ");
	scanf("%f", &e);

	do
	{
		x0 = x1;
		x1 = (3 * pow(x0, 4) + 4 * pow(x0, 2) - 4) / (4 * pow(x0, 3) + 8 * x0 - 9);
	} while (fabs(x1 - x0) > e);
	printf("x = %f\n", x1);
	getch();
}