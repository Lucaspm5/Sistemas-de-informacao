#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define size 30

typedef struct
{
    int x;
    int y;
}Ponto;

void inicializa(int ***matriz) 
{
    *matriz = (int**)calloc(size, sizeof(int*));
    for (int i = 0; i < size; i++)
        *(*matriz + i) = (int *)calloc(size, sizeof(int));
}

void retangulo(int **matriz, int inicio_retangulo, int tamanho_retangulo) 
{
    for (int i = inicio_retangulo; i < inicio_retangulo + tamanho_retangulo; i++) {
        for (int j = inicio_retangulo; j < inicio_retangulo + tamanho_retangulo; j++)
            *(*(matriz + i) + j) = 1;
    }
}

void circulo(int **matriz, Ponto centro, int raio) 
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (sqrt(pow(i - centro.x, 2) + pow(j - centro.y, 2)) <= raio)
                *(*(matriz + i) + j) = 2;
        }
    }
}

void printMatriz(int **matriz) 
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            printf("%d ", *(*(matriz + i) + j));
        printf("\n");
    }
}

void liberamemoria(int **matriz) 
{
    for (int i = 0; i < size; i++)
        free(*(matriz + i));
    free(matriz);
}

int main() 
{
    int **matriz;
    int tamanho_retangulo = size / 2;
    int inicio_retangulo = size / 4;
    int raio = tamanho_retangulo / 2;
    Ponto centro = {inicio_retangulo + tamanho_retangulo / 2, inicio_retangulo + tamanho_retangulo / 2};

    inicializa(&matriz);
    retangulo(matriz, inicio_retangulo, tamanho_retangulo);
    circulo(matriz, centro, raio);
    printMatriz(matriz);
    liberamemoria(matriz);

    return 0;
}
