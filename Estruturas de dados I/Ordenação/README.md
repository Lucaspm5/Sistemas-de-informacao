# Bolha - 

```c
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
```

# Seleção - 

```c
void ordena_selecao(int vetor[], int tamanho) {
    int i, j, indice_menor, aux;
    for (i = 0; i < tamanho - 1; i++) {
        indice_menor = i;
        for (j = i + 1; j < tamanho; j++) {
            if (vetor[j] < vetor[indice_menor]) {
                indice_menor = j;
            }
        }
        if (indice_menor != i) {
            aux = vetor[i];
            vetor[i] = vetor[indice_menor];
            vetor[indice_menor] = aux;
        }
    }
}
```

# Inserção -  

```c
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
```

# Qsort - 

```c
int comparador(const void *a, const void *b)
{
    int *valor1 = (int*)a;
    int *valor2 = (int*)b;
    return *valor1 - *valor2;
}

 qsort(vetor, tamanho, sizeof(int), comparador);
 ```
