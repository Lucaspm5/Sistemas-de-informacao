void sortear_carros(struct carro carros[], int M, int N) {
    int i;
    int min_dim = M < N ? M : N;
    for (i = 0; i < NUM_CARROS; i++) {
        do {
            carros[i].x = rand() % N;
        } while (carros[i].x < min_dim / 2 || carros[i].x > N - min_dim / 2);

        do {
            carros[i].y = rand() % M;
        } while (carros[i].y < min_dim / 2 || carros[i].y > M - min_dim / 2);
    }
}
//----------------------------------------------------------------------------------
void imprimir_tabuleiro(struct carro carros[], int M, int N) {
    int i, j;
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            int k;
            int tem_carro = 0;
            for (k = 0; k < NUM_CARROS; k++) {
                if (carros[k].x == j && carros[k].y == i) {
                    tem_carro = 1;
                    break;
                }
            }
            if (tem_carro) {
                printf("%d ", k + 1);
            } else {
                printf("- ");
            }
        }
        printf("\n");
    }
}
//----------------------------------------------------------------------------------
void testar_colisoes(struct carro carros[]) {
    int i, j;
    int colisoes = 0;
    for (i = 0; i < NUM_CARROS; i++) {
        for (j = i + 1; j < NUM_CARROS; j++) {
            if (carros[i].x == carros[j].x && carros[i].y == carros[j].y) {
                colisoes++;
                printf("Há uma colisão entre os carros %d e %d.\n", i + 1, j + 1);
            }
        }
    }
    printf("O número total de colisões é %d.\n", colisoes);
}
    }

    return 0;
}
