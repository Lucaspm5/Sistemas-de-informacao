#include <stdio.h>

void frac(float num, int* inteiro, float* frac);

void frac(float num, int* inteiro, float* frac)
{
    *inteiro = (int)num;
    *frac = num - *inteiro;
}

int main()
{
    int inteiro;
    float real;
    float x;

    scanf("%f", &x);

    frac(x,&inteiro,&real);

    printf("%d - %.2f\n",inteiro,real);

 return 0;
}
