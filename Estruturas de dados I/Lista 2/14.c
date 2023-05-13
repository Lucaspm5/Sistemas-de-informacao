#include <stdio.h>
#include <stdlib.h>

int preenche(int **arr, int value) {
    int size = 0;

    while (scanf("%d",&value)) 
    {
        if (value == 0) break;

        size++;

        *arr = realloc(*arr, size * sizeof(int));

        *((*arr) + size - 1) = value;
    }

    return size;
}

int main() 
{
    int value;
    int *arr = NULL;

    int size = preenche(&arr, value);

    for (int i = 0; i < size; i++)
        printf("%d ", *(arr + i));

    free(arr);

    return 0;
}
