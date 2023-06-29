#include "prototipos.h"

int main()
{
    Pessoa* lista = NULL;
    
    inserirPessoaInicio(&lista, "Joao", 20, 1, 1.70);
    inserirPessoaInicio(&lista, "Maria", 25, 2, 1.80);
    inserirPessoaFim(&lista, "Pedro", 30, 3, 1.75);
    inserirPessoaOrdenado(&lista, "Ana", 35, 4, 1.68);
    
    mostrarTodasPessoas(lista);
    
    Pessoa* copia = copiarLista(lista);
    
    mostrarTodasPessoas(copia);
    
    buscarPessoa(lista, "Maria");
    
    printf("Quantidade de elementos: %d\n", contarPessoasNaLista(lista));
    
    removerPessoa(&lista, "Maria");
    
    mostrarTodasPessoas(lista);
    
    liberarMemoria(&lista);
    
    return 0;
}
