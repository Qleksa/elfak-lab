#include <stdio.h>
//potrebno jos malo formatiranja kod stampe

int main() {
	int A[100], N, i;
	int M,indexZaBrisanje;							
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &A[i]);
	scanf("%d", &M);
	for (int j = 0; j < M; j++) {
		scanf("%d", &indexZaBrisanje);
		for (i = indexZaBrisanje; i < N-1; i++) {	//pomerimo sve elemente, koji su desno od indexa za brisanje, za jedno mesto u levo
			A[i] = A[i + 1];
		}
		N--;										//broj elemenata se smanji za 1
		for (i = 0; i < N; i++)						//stampamo niz nakon brisanja
			printf("%d ", A[i]);
		printf("\n");
	}
	return 0;
}
