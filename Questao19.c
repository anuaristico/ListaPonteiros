#include <stdio.h>
#include <stdlib.h>

void multiplicaMatrizes(float **A, float **B, float **C, int linhasA, int colunasA, int colunasB) {
    // Percorre todas as linhas de A
    for (int i = 0; i < linhasA; i++) {
        // Percorre todas as colunas de B
        for (int j = 0; j < colunasB; j++) {
            // Realiza a soma dos produtos dos elementos das linhas de A e colunas de B
            for (int k = 0; k < colunasA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
int main() {
    int linhasA, colunasA, linhasB, colunasB;

    printf("Digite as dimensoes da matriz A (linhas e colunas): ");
    scanf("%d %d", &linhasA, &colunasA);

    printf("Digite as dimensoes da matriz B (linhas e colunas): ");
    scanf("%d %d", &linhasB, &colunasB);

    if (colunasA != linhasB) {
        printf("Erro: o numero de colunas de A deve ser igual ao numero de linhas de B.\n");
        return 1;
    }

    // Aloca memoria para as matrizes A, B e C
    float **A = (float **) malloc(linhasA * sizeof(float *));
    float **B = (float **) malloc(linhasB * sizeof(float *));
    float **C = (float **) malloc(linhasA * sizeof(float *));

    for (int i = 0; i < linhasA; i++) {
        A[i] = (float *) malloc(colunasA * sizeof(float));
        C[i] = (float *) malloc(colunasB * sizeof(float));
    }
    for (int i = 0; i < linhasB; i++) {
        B[i] = (float *) malloc(colunasB * sizeof(float));
    }

    // Leitura das matrizes A e B
    printf("Digite a matriz A:\n");
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasA; j++) {
            scanf("%f", &A[i][j]);
        }
    }

    printf("Digite a matriz B:\n");
    for (int i = 0; i < linhasB; i++) {
        for (int j = 0; j < colunasB; j++) {
            scanf("%f", &B[i][j]);
        }
    }

    // Multiplica as matrizes A e B e armazena o resultado em C
    multiplicaMatrizes(A, B, C, linhasA, colunasA, colunasB);

    // Imprime as matrizes A, B e C
    printf("Matriz A:\n");
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasA; j++) {
            printf("%f ", A[i][j]);
        }
        printf("\n");
    }

    printf("Matriz B:\n");
    for (int i = 0; i < linhasB; i++) {
        for (int j = 0; j < colunasB; j++) {
            printf("%f ", B[i][j]);
        }
        printf("\n");
    }

    printf("Matriz C = A*B:\n");
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            printf("%f ", C[i][j]);
        }
        printf("\n");
    }

    // Libera a memoria alocada para as matrizes
    for (int i = 0; i < linhasA; i++) {
        free(A[i]);
        free(C[i]);
    }
    for (int i = 0; i < linhasB; i++) {
        free(B[i]);
    }
    free(A);
    free(B);
    free(C);

    return 0;
}

