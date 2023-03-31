#include <stdio.h>

void ordena_insercao(int vetor[], int tamanho) {
    int i, j, valor;
    for (i = 1; i < tamanho; i++) {
        valor = vetor[i];
        j = i - 1;
        while (j >= 0 && vetor[j] > valor) {
            vetor[j + 1] = vetor[j];
            j = j - 1;
        }
        vetor[j + 1] = valor;
    }
}

int main() {
    int vetor[] = { 5, 1, 3, 6, 2, 10 };
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("Vetor antes da ordenação por inserção:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    ordena_insercao(vetor, tamanho);

    printf("Vetor após a ordenação por inserção:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
