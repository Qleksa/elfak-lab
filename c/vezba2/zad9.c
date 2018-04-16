#include <stdio.h>
#include <math.h>

void main()
{
	int n = 1;
	double fakt = 1, exp_p = 0, exp = 0, ex = 1;
	float x, e;

	printf("e = ");
	scanf("%f", &e);
	printf("x = ");
	scanf("%f", &x);

	do
    	{
        ex *= x;
		fakt *= n;
		exp_p = exp;
		exp += ex / fakt;
		n++;
	} while(fabs(exp - exp_p) > e);

	printf("exp = %7.10f", exp);
}
