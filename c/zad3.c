#include "stdio.h"
#include "math.h"

int bintodec(int bin)
{
	int i = 0, rem, dec = 0;
	while (bin != 0) {
		rem = bin % 10;
		bin /= 10;

		dec += rem * pow(2, i++);
	}
	return dec;
}

void main()
{
	int bin;
	printf("binarni broj: ");
	scanf("%d", &bin);
	printf("\ndekadni ekvivalent binarnog broja %d je %d", bin, bintodec(bin));
}