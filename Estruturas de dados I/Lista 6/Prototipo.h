#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct pessoa {
    char nome[51];
    int idade;
    double altura;
} Pessoa;

void adiciona_pessoa(Pessoa** adiciona, int* new_size);
void Remover_pessoa(Pessoa** remover, int* size, int indice);
void imprimir(Pessoa** imprimir, int size);

Pessoa* Busca_pela_altura(Pessoa* busca, int start, int end, double value);
Pessoa* Busca_especifica(Pessoa* pessoas, int size, char* nome, int idade, double altura);



