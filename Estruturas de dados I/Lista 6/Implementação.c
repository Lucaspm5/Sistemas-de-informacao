#include "Prototipo.h"

void adiciona_pessoa(Pessoa** adiciona, int* new_size)
{  
    int i = 0;
    bool validar = true;
    char op[4];
   
    do {
        printf("Informe respectivamente, o nome, a idade e a altura:\n");
        scanf("%s %d %lf", (*adiciona)[i].nome, &(*adiciona)[i].idade, &(*adiciona)[i].altura);

        printf("Deseja cadastrar mais alguem (Sim ou Nao)");
        scanf("%s", op);
        
        if(!strcmp (op, "nao") || !strcmp (op, "Nao")) validar = false;
        else {
            i++;
            *new_size = i + 1;
            *adiciona = realloc(*adiciona, *new_size * sizeof(Pessoa));
        }
    }while (validar);
}
//----
Pessoa* Busca_pela_altura(Pessoa* busca, int start, int end, double value)
{
    while (start <= end) 
    {
        int meio = (start + end) / 2;

        if (busca[meio].altura == value) return &busca[meio];

        return (busca[meio].altura < value) ? Busca_pela_altura(busca, meio + 1, end, value) : Busca_pela_altura(busca, start, meio - 1, value); 
    }
    return NULL;
}
//----
void Remover_pessoa(Pessoa** remover, int* size, int indice)
{
    if (indice < 0 || indice >= *size) printf("ERRO!\n");

    for (int i = indice; i < *size - 1; i++) (*remover)[i] = (*remover)[i + 1];

    (*size)--;

    *remover = realloc(*remover, *size * sizeof(Pessoa));
}
//----
void imprimir(Pessoa** imprimir, int size)
{
    for (int i = 0;i < size;i++) printf("%s / %d / %lf\n", (*imprimir)[i].nome, (*imprimir)[i].idade, (*imprimir)[i].altura);
}
//----
Pessoa* Busca_especifica(Pessoa* pessoas, int size, char* nome, int idade, double altura) 
{
    for (int i = 0; i < size; i++) 
    {
        if ((nome == NULL || !strcmp(pessoas[i].nome, nome)) && (idade < 0 || pessoas[i].idade == idade) && (altura < 0 || pessoas[i].altura == altura)) 
            return &pessoas[i];
    }
    return NULL;
}

