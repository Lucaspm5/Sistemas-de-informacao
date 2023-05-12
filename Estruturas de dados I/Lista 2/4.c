#include <stdio.h>

// passagem por referencia, utilzo o * me frente a variavel para modificar-la no int main por passagem de endereço
void troca(int *a, int *b)
{
    // crio um vetor auxiliar para armazenar o conteudo apontado pelo a
    int auxiliary;

    auxiliary = *a;
    *a = *b;
    *b = auxiliary;
}

int main()
{
    int a, b;

    scanf("%d %d",&a ,&b);

    troca(&a, &b);

    printf("A - %d - B - %d", a, b);

    return 0;
}