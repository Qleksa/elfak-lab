#include <stdio.h>


int main() {
	int A[100], B[100];
	int N, i, M, j = 0, p, promena = 0;
	printf("Unesi broj elemenata niza A i broj elemenata niza B (max 100): ");
	do
	{
		scanf("%d %d", &N, &M); 																
	} while (N > 100 || M > 100);
	printf("Unesi clanove niza A: \n");
	for (i = 0; i < N; i++) {
		printf("A[%d]: ", i);
		scanf("%d", &A[i]);
	}

	printf("Unesi clanove niza B: \n");
	for (i = 0; i < M; i++) {
		printf("B[%d]: ", i);
		scanf("%d", &B[i]);
	}
	for (i = N; i <= N + M; i++) {
		A[i] = B[j];
		j++;
	}

	for (i = 0; i < N + M; i++) {
		printf("%d ", A[i]);
	}
	
	printf("\n");
	while (!promena) {
		promena = 1;
		for (i = 0; i < N + M - 1; i++) {
			if (A[i + 1] < A[i]) {
				p = A[i + 1];
				A[i + 1] = A[i];
				A[i] = p;
				promena = 0;
			}
		}
	}
	for (i = 0; i < N + M; i++) {
		printf("%d ", A[i]);
	}
	return 0;
}