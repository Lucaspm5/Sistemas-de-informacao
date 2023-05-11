#include <stdio.h>
#include <string.h>

int main() 
{
    char str[1000];
    // 256 = qntd de elementos na tabela ASCII
    int contador[256] = {0};
    int i;

    scanf("%[^\n]s", str);

    for (i = 0; i < strlen(str); i++)
        contador[(int)str[i]]++;

    for (i = 0; i < 256; i++){
        if (contador[i] > 0) 
            printf("%c = %d\n", i, contador[i]);
    }

    return 0;
}