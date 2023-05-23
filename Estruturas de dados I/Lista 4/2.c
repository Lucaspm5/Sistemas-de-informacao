#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main()
{
    int m, n;

    int carro[N][2];

    srand((unsigned)time(NULL));

    printf ("Informe a linha e a coluna, esses valores devem ser pares e simetricos\n");
    printf ("Informe 0, em uma das entradas para parar\n");

    while (scanf("%d %d", &m, &n) == 2 && (m != 0 || n != 0))
    {
        for (int i = 0; i < N; i++)
        {
            carro[i][0] = rand() % m;
            carro[i][1] = rand() % n;
        }

        int submatriz_x = m / 4;
        int submatriz_y = n / 4;
        int submatriz_largura = m / 2;
        int submatriz_altura = n / 2;

        for (int i = 0; i < N; i++)
        {
            if (carro[i][0] >= submatriz_x && carro[i][0] < submatriz_x + submatriz_largura &&
                carro[i][1] >= submatriz_y && carro[i][1] < submatriz_y + submatriz_altura){
                printf("Houve uma colisao no carro %d\n", i + 1);
            }
        }

        printf("\nTabuleiro:\n");

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int valida_carro = -1;
                for (int k = 0; k < N; k++)
                {
                    if (carro[k][0] == i && carro[k][1] == j) { valida_carro = k; break; }

                }
                if (valida_carro != -1) printf("%d ", valida_carro + 1);
                else printf(". ");
            }
            printf("\n");
        }
    }

    return 0;
}
