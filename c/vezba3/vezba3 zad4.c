#include <stdio.h>

int main() {
	int A[100];
	int zbirElemenata = 0, N, i;
	double prosek;
	printf("Unesi broj elemenata niza (max 100): ");
	scanf("%d", &N);
	printf("Unesi elemnete niza: \n");
	for (i = 0; i < N; i++) {
		printf("A[%d]: ", i);
		scanf("%d", &A[i]);
		zbirElemenata += A[i];
	}
	
	prosek = (double)zbirElemenata / N;
	printf("Zbir: %d\n", zbirElemenata);
	printf("Prosek: %lf\n", prosek);
	printf("Clanovi manji od proseka: \n");
	for (i = 0; i < N; i++) {
		if (A[i] < prosek) {
			printf("%d ", A[i]);
		}
	}
	return 0;
}