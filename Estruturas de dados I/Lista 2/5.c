#include <stdio.h>

void comparar(int* a, int* b) {
    int maior = (*a > b) ? *a : *b;
    int menor = (*a < b) ? *a : *b;
    *a = maior;
    *b = menor;
}

int main() {
    int a = 4, b = 5;
    comparar(&a, &b);
    printf("Maior - %d | Menor - %d", a, b);
    return 0;
}
