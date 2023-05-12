#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = NULL;

    arr = malloc(10 * sizeof(int));

    for (int i = 0;i < 10;i++)
        printf("%d - %p\n",i, &*(arr + i));

    free(arr);

    return 0;
}