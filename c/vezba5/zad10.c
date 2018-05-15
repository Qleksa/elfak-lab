#include "stdio.h"

void transponovana(int mat[30][30], int trans[30][30], int dim)
{
    int i, j, p;
    for (i = 0; i < dim; i++)
        for (j = 0; j < dim; j++)
            trans[i][j] = mat[j][i];
}

int main()
{
    int a[30][30], b[30][30], n, i, j;
    printf("n = ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Pre:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }

    transponovana(a, b, n);

    printf("Posle:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%4d", b[i][j]);
        printf("\n");
    }
    return 0;
}