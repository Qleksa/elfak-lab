#include "stdio.h"

void minimax (int* niz, int duzina,int* maxi, int* mini)
{
    int i;
    for (i = 0; i < duzina; i++) {
        if (niz[i] > niz[*maxi])
            *maxi = i;
        if (niz[i] < niz[*mini])
            *mini = i;
    }
}

int main()
{
    int a[] = {1,2,3,4,5}, n=5, i, maxi = 0, mini = 0;
    printf("n = ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    minimax(a, n, &maxi, &mini);
    printf("indeks maksimalnog elementa je %d\nindeks minimalnog elementa je %d\n", maxi, mini);
}