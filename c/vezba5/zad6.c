#include "stdio.h"

void sortiranje(int* niz, int duzina, int smer)
{
    int i, j, p;
    if (smer == 0) {
        for (i = 0; i < duzina-1; i++) {
            for (j = i; j < duzina; j++) {
                if (niz[i] >= niz[j]) {
                    p = niz[i];
                    niz[i] = niz[j];
                    niz[j] = p;
                }
            }
        }
    } 
    if (smer == 1) {
        for (i = 0; i < duzina-1; i++) {
            for (j = i; j < duzina; j++) {
                if (niz[i] <= niz[j]) {
                    p = niz[i];
                    niz[i] = niz[j];
                    niz[j] = p;
                }
            }
        }
    }
}

int main()
{
    int a[30], smer, i, n;
    printf("n = ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Unesi nacin sortiranja(0 - neopadajuci, 1 - nerastuci): ");
    scanf("%d", &smer);
    

    if (smer == 0 || smer == 1) {
        sortiranje(a, n, smer);
        for (i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
    } else {
        printf("err\n");
    }
}