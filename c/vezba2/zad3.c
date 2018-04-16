#include <stdio.h>
#include <math.h>
//svi trocifreni manji od n ciji je zbir cifara prost broj
int main()
{
    int N, cs, cd, cj, zb, i, j, prost;

    printf("Unesi N: ");
    scanf("%d",&N);

    for (i = 101; i <= N; i++)
    {
        cs = i / 100;
        cd = (i / 10) % 10;
        cj = i % 10;
        zb = cs + cd + cj;

        for (j = 2; j <= sqrt(zb); j++)
        {
            if (zb % j == 0)
            {
                prost = 0;
                break;
            }
            else
                prost = 1;
        }
        if (prost)
            printf("%d\n", i);

    }

    return 0;
}
