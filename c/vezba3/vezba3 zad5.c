#include <stdio.h>

int main() {
	int A[100], N, i;
	int k,p;
	scanf("%d", &k);
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
	printf("\nClanovi niza pre izmene: \n");
	for (i = 0; i < N; i++) {
		printf("%d ", A[i]);
	}
	for (int j = 0; j < k; j++) {
		for (i = 0; i < N - 1; i++) {
			p = A[i];
			A[i] = A[i + 1];
			A[i + 1] = p;
		}
	}
	printf("\nClanovi niza posle izmene: \n");
	for (i = 0; i < N; i++) {
		printf("%d ", A[i]);
	}
	return 0;
}
