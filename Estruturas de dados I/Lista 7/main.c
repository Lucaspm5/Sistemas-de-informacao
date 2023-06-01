#include "str.c"

int main()
{
    int opc;

    char* nome = (char*)malloc(301 * sizeof(char));
    char* str = (char*)malloc(300 * sizeof(char));
    char* concatenacao = (char*)malloc(601 * sizeof(char));

    printf("1 - Ler a string\n");
    printf("2 - Verificar tamanho da string\n");
    printf("3 - Comparar string\n");
    printf("4 - Concatenar strings\n");
    printf("5 - sair\n");
    scanf("%d", &opc);

    for ( ; ;)
    {
        if (opc == 5)break;

        switch (opc)
        {
            case 1:
                nome = ler();
                break;
            case 2:
                printf("Tamanho da string: %d\n", tamanhoStr(nome));
                break;
            case 3:
                printf("Informe uma outra string:\n");
                fflush(stdin);
                scanf("%[^\n]s", str);
                fflush(stdin);
                if(comparar(nome, str)) printf("String iguais\n");
                else printf("String diferentes\n");
                break;
            case 4:
                concatenacao = concatenar(nome, str);
                printf("String concatenada %s\n", concatenacao);
                break;
            case 5:
                break;
            default:
                printf("ERROR!\n");
        }
    }

    liberar(nome);

    free(str);
    free(concatenacao);

    return 0;
}
