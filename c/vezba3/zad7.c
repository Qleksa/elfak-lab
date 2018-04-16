#include <stdio.h>

int main() {
	int A[100], B[100];
	short N, // broj elemenata niza A
	      M; // broj elemenata niza B

	printf("Unesi broj elemenata niza A i broj elemenata niza B (max 100): ");
	do
	{
		scanf("%hd %hd", &N, &M); 				//h prefiks za konverziju tipa short
	} while (N > 100 || M > 100);
	
	printf("Unesi clanove niza A: \n");
	for (short i = 0; i < N; i++) {
		printf("A[%d]: ", i);
		scanf("%d", &A[i]);
	}

	printf("Unesi clanove niza B: \n");
	for (short i = 0; i < M; i++) {
		printf("B[%d]: ", i);
		scanf("%d", &B[i]);
	}

	for (int i = 0; i < ((N < M) ? N : M); i++) { 			// " i " se krece DO broja elemenata kraceg niza
		if (A[i] < B[i]) {
			printf("%d %d ", A[i], B[i]);
		}else {
			printf("%d %d ", B[i], A[i]);
		}
	}
	for (int i = ((N < M) ? N : M); i < ((N > M) ? N : M); i++) {   // " i " se krece OD broja elemenata kraceg niza
		if (N > M) {						// do broja elemenata duzeg niza
			printf("%d ", A[i]);
		}
		else
			printf("%d ", B[i]);
	}
	return 0;
}
