#include <stdio.h>


int main() {
	int A[100] ;
	int N, i, M, j, broj, pozicija;
	printf("Unesi broj elemenata niza A (max 100): ");
	do
	{
		scanf("%d", &N); 																	
	} while (N > 100);
	printf("Unesi clanove niza A: \n");
	for (i = 0; i < N; i++) {
		printf("A[%d]: ", i);
		scanf("%d", &A[i]);
	}
	 
	printf("Unesi broj elemenata za umetanje: ");
	scanf("%d", &M);
	for (j = 0; j < M; j++) {
		printf("Unesi element i poziciju na koju treba umetnuti taj element (redom): ");
		scanf("%d", &broj);
		do {
			scanf("%d", &pozicija);
			if (pozicija > N)
				printf("Nepostojeca pozicija, unesi ponovo: ");
		} while (pozicija > N);

		for (i = N; i > pozicija; i--) {
			A[i] = A[i - 1];
		}
		A[pozicija] = broj;
		N++;
		for (i = 0; i < N; i++)
			printf("%d ", A[i]);
		printf("\n");


	}
	return 0;
}