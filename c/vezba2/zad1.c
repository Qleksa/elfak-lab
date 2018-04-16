#include <stdio.h>
#include <math.h>
// svi prosti manji od n
int main()
{
	int i, j = 2, n, p;

	printf("n = ");
	scanf("%d", &n);

	for (i = 2; i <= n; i++) {
		p = 1;
		//AKO PREKO WHILE IZBRISI OVO j = 2;

		for (j = 2; j <= sqrt(i); j++)
			if (i % j == 0) {
				p = 0;
				break;
			}

		/*while (p == 1 && j <= sqrt(i)) {
			if (i % j == 0) {
				p = 0;
				break;
			}
			j++;
		}*/
		if (p)
			printf("%d\n", i);
	}
}
