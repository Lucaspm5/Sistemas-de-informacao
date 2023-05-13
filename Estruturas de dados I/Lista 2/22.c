#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define s1 5
#define s2 5

int somar(int *arr1, int *arr2, int size1, int size2, int *new_size, int *new_arr)
{
    int tam = 0;

    if (size1 >= size2)
        tam = size1;
    else
        tam = size2;

    bool auxiliary = (size1 != size2);

    if (auxiliary)
        return 0;

    if (!auxiliary)
    {
        for (int i = 0; i < tam; i++)
            *(new_arr + i) = *(arr1 + i) + *(arr2 + i);

        *new_size = tam;
        return 1;
    }
}

int main()
{
    int arr[s1];
    int arr2[s2];
    int new_arr[s1];
    int new_size;

    for (int i = 0; i < s1; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < s2; i++)
        scanf("%d", &arr2[i]);

    if (somar(arr, arr2, s1, s2, &new_size, &new_arr))
    {
        for (int i = 0; i < new_size; i++)
            printf("%d\n", new_arr[i]);
    }
    else
        printf("Arrays com tamanho diferente\n");

    return 0;
}
