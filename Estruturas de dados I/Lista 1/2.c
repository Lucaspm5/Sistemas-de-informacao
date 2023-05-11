#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int **mat = NULL;
    int *vet = NULL;

    srand((unsigned)time(NULL));

    mat = (int**)malloc(200 * sizeof(int*));

    for (int i = 0;i < 200;i++)
        *(mat + i) = (int*)malloc(100 * sizeof(int));
    
    vet = (int*)malloc(100 * sizeof(int));

    for (int i = 0;i < 200;i++){
        for (int j = 0;j < 100;j++)
            *(*(mat + i) + j) = rand() % 100;
    }

    for (int i = 0;i < 200;i++){
        for (int j = 0;j < 100;j++)
            (*(vet + *(*(mat + i) + j)))++;
    }

    for (int i = 0;i < 100;i++)
    {
        if(*(vet + i) > 0)
            printf("%d - %d\n",i,*(vet + i));
        else if(*(vet + i) == 0)
            printf("%d nao ocorreu\n",i);
    }

    for (int i = 0;i < 200;i++)
        free(*(mat + i));
    free(vet);
    
    return 0;
}