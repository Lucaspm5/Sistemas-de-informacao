#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define size 5

void count(int *arr,int tam, int *contar)
{
    int cont = 0;
    int maior[cont];

    for (int i = 0;i < tam;i++)
    {
        if(*(arr + i) > maior)
            maior[cont++] = *(arr + i);

    }

    for (int j = 0;j < tam;j++)
    {
        if(maior[cont - 1] != *(arr + j)) {break;}
        else if(maior[cont - 1] == *(arr + j)) {(*contar)++;}
    }
}

int main()
{
    int *arr = NULL;
    int contador = 0;

    arr = (int*)malloc(size * sizeof(int));

    for (int i = 0;i < size;i++)
        scanf("%d", &*(arr + i));

    count(arr, size, &contador);

    printf("%d\n",contador);

    free(arr);

    return 0;
}