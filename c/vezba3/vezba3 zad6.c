#include <stdio.h>


void main() {
	int A[100]; int B = 1, MAX = 1;
	int i, N;
	printf("Unesi broj clanova niza:  ");
	do
		scanf("%d", &N);
	while (N>100);
	printf("Unesi clanove niza: \n");
	for (i = 0; i < N; i++) {
		printf("A[%d]: ", i);
		scanf("%d", &A[i]);
	}
	for (i = 0; i <= N - 2; i++) {
		if (A[i] < A[i + 1]) {
			B++;
		}
		else {
			if (MAX < B)
				MAX = B;
			B = 1;
		}
	}
	printf("Najveca duzina rastuce sekvence je : %d", MAX);
}
