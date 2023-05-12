#include <stdio.h>
#include <stdilib.h>

int main()
{
    int **A = NULL;

    A = (int**)malloc(3 * sizeof(int*));

    for (int i = 0;i < 3;i++)
        *(A + i) = (int*)malloc(3 * sizeof(int));

    for (int i = 0;i < 3;i++){
        for (int j = 0;j < 3;j++)
            printf("[%p]",&*(*(A + i) + j));
        printf("\n");
    }

    for (int i = 0;i < 3;i++)
        free(*(A + i));

    return 0;
}