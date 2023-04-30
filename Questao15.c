#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// função de comparação para a ordenação
int compara_inteiros(const void *a, const void *b) {
    int *pa = (int*) a;
    int *pb = (int*) b;
    return *pa - *pb;
}

// função de ordenação que recebe um array de inteiros, o número de elementos
// do array e um ponteiro para a função de comparação
void ordena_inteiros(int *array, int n, int (*compara)(const void *, const void *)) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (compara(&array[j], &array[i]) < 0) {
                int aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
}

int main() {
    int n, i;
    int *valores;
    clock_t t_inicio, t_fim;
    double tempo_execucao;


    printf("Digite o número de valores a serem ordenados: ");
        scanf("%d", &n);

    valores = (int*) malloc(n * sizeof(int));

    printf("Digite os valores:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &valores[i]);
    }

    // início da medição do tempo de execução
    t_inicio = clock();

    ordena_inteiros(valores, n, compara_inteiros);

    // fim da medição do tempo de execução
    t_fim = clock();

    tempo_execucao = (double)(t_fim - t_inicio) / CLOCKS_PER_SEC;

    printf("Valores ordenados:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    // impressão do tempo de execução
    printf("\nTempo de execucao: %lf segundos\n", tempo_execucao);

    free(valores);

    return 0;
}
