#include <stdio.h>
#include <math.h>

int raizes(float A, float B, float C, float *X1, float *X2) 
{

    float delta = B * B - 4 * A * C;
    float aux = (2 * A);

    if (A == 0 || delta < 0) return 0;

    else if (delta == 0) 
    {
        *X1 = -B / (2 * A);

        return 1;
    }else{
        *X1 = (-B + sqrt(delta)) / aux;
        *X2 = (-B - sqrt(delta)) / aux;

        return 2;
    }
}

int main() 
{
    float A, B, C, X1, X2;

    scanf("%f %f %f", &A, &B, &C);

    int num_raizes = raizes(A, B, C, &X1, &X2);

    if (num_raizes == 0) printf("Sem raízes reais\n");
    else if (num_raizes == 1) printf("Uma raiz real: %.2f\n", X1);
    else 
        printf("Duas raízes reais: %.2f e %.2f\n", X1, X2);


    return 0;
}
