#include "stdio.h"
#define SIZE 30


void stampaj(int n, int m, int mat[SIZE][SIZE])
{
    int i, j;
    for (i = 0; i < n; i++) {
        printf("|  ");
        for (j = 0; j < m; j++) {
            printf("%4d ", mat[i][j]);
        }
        printf("  |");
        printf("\n");
    }
}

int main()
{
    int a[SIZE][SIZE], i, j, n, m;
    printf("n = ");
    scanf("%d", &n);
    printf("m = ");
    scanf("%d", &m);
    for (i = 0; i < n; i++) 
        for (j = 0; j < m; j++) 
            scanf("%d", &a[i][j]);

    stampaj(n, m, a);
}