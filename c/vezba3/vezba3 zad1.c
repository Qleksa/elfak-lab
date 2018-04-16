#include <stdio.h>;


void main() {
	int i, A[100], N, p, brojNula = 0;
	printf("Unesi broj elemenata niza (max 100): ");
	do
	{
		scanf("%d", &N);
	} while (N > 100);
	printf("Unesi elemente niza:\n");
	for (i = 0; i < N; i++) {
		printf("A[%d] =  ", i);
		scanf("%d", &A[i]);
		if(A[i]==0)
			brojNula++;
	}
		int nulaPronadjena = 0, pozicijaNule;
		i = 0;
		while (!nulaPronadjena) {
			if (A[i] == 0) {
				nulaPronadjena = 1;
				pozicijaNule = i;
			}
			i++;
		}
		while (A[N - 1] != 0) {
			for (i = N - 1; i > pozicijaNule + 1; i--) {
				if (A[i - 1] == 0) {
					p = A[i];
					A[i] = A[i - 1];
					A[i - 1] = p;
				}
			}
			pozicijaNule++;
			
		}
		for (i = 0; i <= N - brojNula; i++) {
			printf("%d ", A[i]);
		}
}