#include <stdio.h>

int main() {
	int A[100];
	int zbir=0, i, brojElemenata=0, V;
	printf("Unesi V: ");
	scanf("%d", &V);
	i = 0;
	do {
		scanf("%d", &A[i]);
		zbir += A[i];
		brojElemenata++;
		i++;
	} while (zbir < V);
	printf("Broj elemenata: %d\nClanovi niza:\n", brojElemenata);
	for (i = 0; i < brojElemenata; i++)
		printf("%d\n", A[i]);
	printf("\nZbir:%d\n", zbir);
	printf("Prosek: %f", zbir*1.00 / brojElemenata);

	return 0;
}
