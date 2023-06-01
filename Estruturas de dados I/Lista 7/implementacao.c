#include "str.h"

char* ler()
{
    char* str = (char*)malloc(10 * sizeof(char));

    printf("Informe uma string:\n");

    int c;
    
    while ((c = getchar()) != '\n' && c != EOF);

    scanf("%[^\n]s", str);
    return str;
}

int tamanhoStr(char* str)
{
    return strlen(str);
}

int comparar(char *str1, char *str2)
{
    return (!strcmp(str1, str2)) ? 1 : 0;
}

char* concatenar(char *str1, char *str2)
{
    int valido = strlen(str1) + strlen(str2);

    return (strlen(str1) >= valido + 1) ? strcat(str1, str2) : 0;
}

void liberar(char *str)
{
    free(str);
}
