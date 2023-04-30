#include <stdio.h>
#include <stdlib.h>

// função que soma os elementos correspondentes de dois vetores
void soma_vetores(int *v1, int *v2, int *v3, int n) {
    int i;
    for (i = 0; i < n; i++) {
        v3[i] = v1[i] + v2[i];
    }
}

int main() {
    int n, i;
    int *v1, *v2, *v3;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);

    v1 = (int*) malloc(n * sizeof(int));
    v2 = (int*) malloc(n * sizeof(int));
    v3 = (int*) malloc(n * sizeof(int));

    printf("Digite os elementos do primeiro vetor:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &v1[i]);
    }

    printf("Digite os elementos do segundo vetor:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &v2[i]);
    }

    soma_vetores(v1, v2, v3, n);

    printf("Resultado da soma dos vetores:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", v3[i]);
    }
    printf("\n");

    free(v1);
    free(v2);
    free(v3);

    return 0;
}
