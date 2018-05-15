#include "stdio.h"
#include "math.h"

int prost(int a)
{
    int i, p = 1;
    for (i = 2; i < a / 2 && p == 1; i++) {
        if (a % i == 0) {
           p = 0;
        }
    }
    return p;
}

void main() 
{
    int x, b = 0, i, n;
    printf("n = ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("broj: ");
        scanf("%d", &x);
        if (prost(x))
            b++;
    }
    printf("Od %d brojeva, %d je prosto\n", n, b);
}