#include <stdio.h>
// svi trocifreni ciji je zbir cifara 17 a da je deljiv sa 7
void main()
{
	int i, k, s, d, j, zc;

	printf("k = ");
	scanf("%d", &k);

	for (i = 100; i <= 999; i++) {
		j = i % 10;
		d = (i / 10) % 10;
		s = i / 100;
		zc = s + d + j;

		if (zc == 17 && i % k == 0)
			printf("%d\n", i);
	}
}
