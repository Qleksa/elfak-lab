#include <stdio.h>
//potrebno formatiranje štampe

int main() {
	int A[100], N, i;
	int j, M, broj, poz;
	printf("Unesi broj clanova niza: ");
	scanf("%d", &N);
	for (i = 0; i < N; i++) {			 //unos niza
		scanf("%d", &A[i]);				 //unos niza
	}									 //unos niza

	scanf("%d", &M);					 //unos broja elemenata koje trebamo da umetnemo u niz
	for (j = 0; j < M; j++) {			
		scanf("%d", &broj);				 //unos M-tog broja
		for (i = 0; i < N; i++) {		 //stampanje niza pre promena
			printf("%d ", A[i]);		 //stampanje niza pre promena
		}								 //stampanje niza pre promena
		i = 0;
		while (A[i] > broj)				 //trazimo poziciju gde treba umetnuti broj
			i++;
		if (A[i] != broj) {
			poz = i;
			for (i = N; i > poz; i--) {
				A[i] = A[i - 1];
			}
			A[poz] = broj;
			N++;
			for (i = 0; i < N; i++) {		 //stampanje niza posle promena
				printf("%d ", A[i]);		 //stampanje niza posle promena
			}								 //stampanje niza posle promena

		}else
			printf("Broj vec postoji u nizu.");			

	}

	return 0;
}