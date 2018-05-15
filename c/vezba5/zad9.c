#include "stdio.h"
#include "math.h"

double suma(float x, float e)
{
    double s = 0, s0, stepen = 1, fakt = 1;
    int n = 1;
    do 
    {
        stepen *= x;
        fakt *= n++;
        s0 = s;
        s += stepen / fakt;
    } while (fabs(s - s0) > e);
    
    return s;
}

int main()
{
    float x, E;
    printf("x = ");
    scanf("%f", &x);
    printf("E = ");
    scanf("%f", &E);
    printf("exp(x) = %7.10f\n", suma(x, E));
    return 0;
}