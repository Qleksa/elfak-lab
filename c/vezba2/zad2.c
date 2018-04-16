#include <stdio.h>

//suma prvih n parnih clanova fibonacijevog niza (n >= 3)
void main()
{
	int i = 0, n, f1 = 1, f2 = 1, s = 0, p;

	printf("n = ");
	scanf("%d", &n);

	while (i < n) {
		p = f1 + f2;
		f1 = f2;
		f2 = p;
		if (f2 % 2 == 0) {
			s += f2;
			i++;
		}
	}

	printf("s = %d", s);
}
