#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int** matriz;

    matriz = (int**)malloc(3 * sizeof(int*));

    for (int i = 0;i < 3;i++) matriz[i] = (int*)malloc(3 * sizeof(int));

    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            *(*(matriz + i) + j) = rand();
        }
    }

    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            printf("%p ", &*(*(matriz + i)+ j));
        }
        printf("\n");
    }

    for (int i = 0;i < 3;i++) free(matriz[i]);

    free(matriz);

    return 0;
}
