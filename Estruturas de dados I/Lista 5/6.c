#include <stdio.h>
#include <stdlib.h>

int busca(int* x, int value, int size)
{
    if (size == 0) return 0;
    if (*x == value) return 1;

    else{
        return busca(x + 1, value, size - 1);
    }
}

int main()
{
    int *arr = (int *)calloc(100, sizeof(int));
    int x, cont = 0, k;

    for (;;)
    {
        scanf("%d", &x);

        if (x == 0) break;

        if (cont == 100) arr = (int*)realloc(arr, (cont * 2) * sizeof(int));

        arr[cont++] = x;
    }

    printf("Informe o valor a ser buscado dentro do vetor\n");
    scanf("%d", &k);

    if(busca(arr, k, cont)) printf("k: %d, encontrado no vetor\n", k);
    else{
        printf("Valor nao encontrado\n");
    }

    free(arr);

    return 0;
}