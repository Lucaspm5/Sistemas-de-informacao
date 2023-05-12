#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *A = NULL;

    A = (int*)malloc(5 * sizeof(int));

    for (int i = 0; i < 5;i++)
        scanf("%d",&*(A + i));

    for (int i = 0;i < 5;i++)
        printf("%d\n",*(A + i) * *(A + i));

    free(A);

    return 0;
}