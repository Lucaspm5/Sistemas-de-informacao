#include "Prototipo.h"

int main()
{
    int opc, indice, count = 1, idade;;
    double altura;
    char nome[51];

    Pessoa* dados = calloc(count, sizeof(Pessoa)); 

    printf("1-Cadastrar\n");
    printf("2-Buscar altura\n");
    printf("3-Remover\n");
    printf("4-Imprimir\n");
    printf("5-Mostrar pessoa (informe o nome, ou a idade, ou a altura)\n");
    printf("6-Sair\n");

    for (; ;)
    {
        scanf("%d", &opc);

        if (opc == 6) break;

        switch (opc) {
            case 1:
                adiciona_pessoa(&dados, &count);
                break;
            case 2:
                printf("Informe a altura:\n");
                scanf("%lf", &altura);

                Pessoa* aux = Busca_pela_altura(dados, 0, count - 1, altura);

                if (aux != NULL) printf("Pessoa encontrada: %s / %d / %lf\n", aux->nome, aux->idade, aux->altura);
                else printf("Pessoa não encontrada\n");

                break;
            case 3:
                printf("Informe o indice da pessoa a ser removido\n");
                scanf("%d", &indice);

                Remover_pessoa(&dados, &count, indice);

                break;
            case 4:
                imprimir(&dados, count);

                break;
            case 5:
            {
                printf("Caso voce deseje buscar apenas por uma opc exclusiva ignore ou insira -1 nas demais\n");

                fflush(stdin);
                printf("Informe o nome, idade e a altura respectivamente:\n");
                scanf("%s %d %lf", nome, &idade, &altura);
                fflush(stdin);
                
                Pessoa* resultado = Busca_especifica(dados, count, strlen(nome) > 0 ? nome : NULL, idade, altura);

                if (resultado != NULL) printf("Pessoa encontrada: %s / %d / %lf\n", resultado->nome, resultado->idade, resultado->altura);
                else printf("Pessoa não encontrada\n");
                
                break;
            }  
            default:
                printf("ERRO!\n");
        }
    }

    free(dados);

    return 0;
}
