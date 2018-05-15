#include "stdio.h"

int delioci(float broj, float* niz)
{
    int i, n = 0;
    for (i = 1; i < broj / 2; i++) {
        if ((int)broj % i == 0) {
            niz[n++] = broj / i;
        }
    }
    return n;
}

int main()
{
    float a[30], x, n;
    int i;
    printf("broj: ");
    scanf("%f", &x);
    n = delioci(x, a);
    for (i = 0; i < n; i++) {
        printf("%.2f ", a[i]);
    }
    return 0;
}