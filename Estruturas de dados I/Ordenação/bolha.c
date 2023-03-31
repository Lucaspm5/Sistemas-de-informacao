#include <stdio.h>

void ordena_bolha(int vetor[], int tamanho) {
    int i, j, aux;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main() {
    int vetor[] = { 5, 1, 3, 6, 2, 10 };
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("Vetor antes da ordenação por bolha:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    ordena_bolha(vetor, tamanho);

    printf("Vetor após a ordenação por bolha:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
