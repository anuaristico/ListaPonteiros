#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ordenador(float *vet, int n) {
    int i, j;
    float aux;

    for (i = 1; i < n; i++) {
        aux = vet[i];
        j = i - 1;

        while (j >= 0 && vet[j] > aux) {
            vet[j+1] = vet[j];
            j--;
        }

        vet[j+1] = aux;
    }
}

int main() {
    int n, i;
    float *vet;
    clock_t t_inicio, t_fim;
    double tempo_execucao;

    printf("Digite o número de elementos: ");
    scanf("%d", &n);

    // alocação dinâmica de memória
    vet = (float*)malloc(n * sizeof(float));

    // leitura dos elementos
    printf("Digite os elementos:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &vet[i]);
    }

    // início da medição do tempo de execução
    t_inicio = clock();

    // ordenação dos elementos
    ordenador(vet, n);

    // fim da medição do tempo de execução
    t_fim = clock();

    tempo_execucao = (double)(t_fim - t_inicio) / CLOCKS_PER_SEC;

    // impressão dos elementos ordenados
    printf("Os elementos em ordem crescente são:\n");
    for (i = 0; i < n; i++) {
        printf("%f ", vet[i]);
    }

    // impressão do tempo de execução
    printf("\nTempo de execucao: %lf segundos\n", tempo_execucao);

    // liberação da memória alocada
    free(vet);

    return 0;
}
