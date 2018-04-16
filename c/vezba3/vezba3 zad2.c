#include <stdio.h>;


int main() {
	int A[100],N;
	int promena = 1, suma = 0, p;
	
	printf("Unesi broj clanova niza (max 100):  ");
	do
		scanf("%d", &N);
	while (N>100);
	printf("Unesi clanove niza: \n");
	for (int i = 0; i < N; i++) {
		printf("A[%d]: ", i);
		scanf("%d", &A[i]);
	}

	printf("Niz pre promene: \n");
	for (int i = 0; i < N; i++) {
		suma += A[i];
		printf("%d ", A[i]);
	}

	while (promena) {
		promena = 0;
		for (int i = 0; i < N - 1; i++) {

			if (A[i] < A[i + 1]) {
				//swap(A[i], A[i + 1]);
				p = A[i];
				A[i] = A[i + 1];
				A[i + 1] = p;
				promena = 1;
			}

		}
	}
	
	printf("\nUredjeni niz: \n");
	for (int i = 0; i < N; i++) {
		printf("%d ", A[i]);
	}
	printf("\nprosek: %.3lf\n", suma*1.00/N);
	return 0;
}