#include <stdio.h>

#define ent(x) scanf("%f", x)

void ler_notas(float *grade1, float *grade2) 
{
    do{
        puts("Entre com a primeira nota: ");
        ent(grade1);
    }while (*grade1 < 0 || *grade1 > 10);

    do{
        puts("Entre com a segunda nota: ");
        ent(grade2);
    }while (*grade2 < 0 || *grade2 > 10);
}

void calcular_medias(float n1, float n2, float *media_simples, float *media_ponderada) 
{
    *media_simples = (n1 + n2) / 2;
    *media_ponderada = (n1 + n2 * 2) / 3;
}

int main() 
{
    float n1, n2, media_simples, media_ponderada;

    ler_notas(&n1, &n2);

    calcular_medias(n1, n2, &media_simples, &media_ponderada);

    printf("Média simples: %.2f\n", media_simples);
    printf("Média ponderada: %.2f\n", media_ponderada);
    
    return 0;
}
