#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define linha 200
#define coluna 100

int main()
{
    int *mat = NULL;
    int *vet = NULL;

    srand((unsigned)time(NULL));

    mat = (int*)malloc(linha * coluna * sizeof(int));
    vet = (int*)calloc(coluna, sizeof(int));

    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++)
            *(mat + i * coluna + j) = rand() % 100;
    }

    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++)
            (*(vet + *(mat + i * coluna + j)))++;
    }

    for (int i = 0; i < coluna; i++)
    {
        if(*(vet + i) > 0)
            printf("%d - %d\n",i,*(vet + i));
        else if(*(vet + i) == 0)
            printf("%d nao ocorreu\n",i);
    }

    free(mat);
    free(vet);

    return 0;
}
