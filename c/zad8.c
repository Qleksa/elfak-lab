#include "stdio.h"

int sumaIspodSporedne(int a[30][30], int dim)
{
    int s = 0, i, j;
    for (i = 0; i < dim; i++)
        for (j = 0; j < dim; j++)
            if (i + j > dim - 1)
                s += a[i][j];
    
    return s;
}

int main()
{
    int b[30][30], c[30][30], n, i, j;
    printf("n = ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &b[i][j]);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &c[i][j]);

    if (sumaIspodSporedne(b, n) > sumaIspodSporedne(c, n)) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                printf("%d", b[i][j]);
            printf("\n");
        }
    } else {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                printf("%4d", c[i][j]);
            printf("\n");
        }
    }
}