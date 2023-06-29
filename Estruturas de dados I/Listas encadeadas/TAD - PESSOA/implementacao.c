#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

Pessoa* criarPessoa(char nome[], int id, int idade, float altura) {
    Pessoa* novaPessoa = (Pessoa*) malloc(sizeof(Pessoa));
    strcpy(novaPessoa->nome, nome);
    novaPessoa->id = id;
    novaPessoa->idade = idade;
    novaPessoa->altura = altura;
    novaPessoa->NO = NULL;
    return novaPessoa;
}

void inserirPessoaInicio(Pessoa** lista, char nome[], int id, int idade, float altura) {
    Pessoa* novaPessoa = criarPessoa(nome, id, idade, altura);
    novaPessoa->NO = *lista;
    *lista = novaPessoa;
}

void inserirPessoaFim(Pessoa** lista, char nome[], int id, int idade, float altura) {
    Pessoa* novaPessoa = criarPessoa(nome, id, idade, altura);
    if (*lista == NULL) {
        *lista = novaPessoa;
    } else {
        Pessoa* aux = *lista;
        while (aux->NO != NULL) {
            aux = aux->NO;
        }
        aux->NO = novaPessoa;
    }
}

void inserirPessoaOrdenado(Pessoa** lista, char nome[], int id, int idade, float altura) {
    Pessoa* novaPessoa = criarPessoa(nome, id, idade, altura);
    if (*lista == NULL || idade <= (*lista)->idade) {
        novaPessoa->NO = *lista;
        *lista = novaPessoa;
    } else {
        Pessoa* aux = *lista;
        while (aux->NO != NULL && aux->NO->idade < idade) {
            aux = aux->NO;
        }
        novaPessoa->NO = aux->NO;
        aux->NO = novaPessoa;
    }
}

void mostrarPessoa(Pessoa* pessoa) {
    printf("Nome: %s\n", pessoa->nome);
    printf("ID: %d\n", pessoa->id);
    printf("Idade: %d\n", pessoa->idade);
    printf("Altura: %.2f\n", pessoa->altura);
    printf("\n");
}

void mostrarTodasPessoas(Pessoa* lista) {
    if (lista == NULL) {
        printf("A lista de pessoas está vazia.\n");
        return;
    }

    Pessoa* aux = lista;
    while (aux != NULL) {
        mostrarPessoa(aux);
        aux = aux->NO;
    }
}

int contarPessoasNaLista(Pessoa* lista) {
    int count = 0;
    Pessoa* aux = lista;
    while (aux != NULL) {
        count++;
        aux = aux->NO;
    }
    return count;
}

void buscarPessoa(Pessoa* lista, char nome[]) {
    int encontrou = 0;
    Pessoa* aux = lista;
    while (aux != NULL) {
        if (strcmp(aux->nome, nome) == 0) {
            printf("Pessoa encontrada:\n");
            mostrarPessoa(aux);
            encontrou = 1;
            break;
        }
        aux = aux->NO;
    }

    if (!encontrou) printf("Pessoa não encontrada.\n");
}

void removerPessoa(Pessoa** lista, char nome[]) {
    int encontrou = 0;
    Pessoa* anterior = NULL;
    Pessoa* atual = *lista;

    while (atual != NULL) {
        if (strcmp(atual->nome, nome) == 0) {
            if (anterior == NULL) {
                *lista = atual->NO;
            } else {
                anterior->NO = atual->NO;
            }
            free(atual);
            encontrou = 1;
            printf("Pessoa removida com sucesso.\n");
            break;
        }
        anterior = atual;
        atual = atual->NO;
    }

    if (!encontrou) printf("Pessoa não encontrada.\n");
}

Pessoa *copiarLista(Pessoa *lista) {
    Pessoa *copia = NULL;
    Pessoa *aux = lista;
    while (aux != NULL) {
        inserirPessoaFim(&copia, aux->nome, aux->idade, aux->id, aux->altura);
        aux = aux->NO;
    }
    return copia;
}

void liberarMemoria(Pessoa** lista) {
    Pessoa* aux = *lista;
    while (aux != NULL) {
        Pessoa* temp = aux;
        aux = aux->NO;
        free(temp);
    }
    *lista = NULL;
    printf("Memória liberada.\n");
}
