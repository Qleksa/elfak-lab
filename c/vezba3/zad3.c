#include <stdio.h>

void main()
{
    int A[30], V, i, s = 0, n = 0;

    printf("V = ");

    scanf("%d", &V);

    // unos
    while(s <= V) {
        scanf("%d", &A[n]); 
        s += A[n]; 
        n++;
    }

    // stampa
    printf("Niz: ");
    for (i = 0; i < n; i++) printf("%d ", A[i]);

    // broj elemenata i srednja vrednost
    printf("\nBroj elemenata: %d\n", n+1);
    printf("Srednja vrednost: %d", s/(n+1));
}