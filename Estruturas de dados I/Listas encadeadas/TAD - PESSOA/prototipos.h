#ifndef PROTOTIPOS_H
#define PROTOTIPOS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pessoa {
    char nome[50];
    int id, idade;
    float altura;
    struct pessoa *NO;
} Pessoa;

Pessoa* criarLista(Pessoa **lista);
void inserirPessoaInicio(Pessoa **lista, char *nome, int idade, int id, float altura);
void inserirPessoaFim(Pessoa **lista, char *nome, int idade, int id, float altura);
void inserirPessoaOrdenado(Pessoa **lista, char *nome, int idade, int id, float altura);
Pessoa *copiarLista(Pessoa *lista);
void buscarPessoa(Pessoa *lista, char *nome);
void removerPessoa(Pessoa **lista, char *nome);
void mostrarTodasPessoas(Pessoa *lista);
void mostrarInverso(Pessoa *lista);
void liberarMemoria(Pessoa **lista);
int contarPessoasNaLista(Pessoa *lista);
#endif  // PROTOTIPOS_H
