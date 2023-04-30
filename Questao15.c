#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função de comparação para usar com qsort()
int cmp (const void * a, const void * b) {
   return (*(float*)a - *(float*)b);
}

int main() {
   int n, i;
   float *valores;
   clock_t inicio, fim;
   double tempo_decorrido;


   printf("Digite o número de valores a serem ordenados: ");
   scanf("%d", &n);

   // Alocação dinâmica de memória para o array de valores
   valores = (float*) malloc(n * sizeof(float));

   // Loop para obter cada valor a ser ordenado
   for(i = 0; i < n; i++) {

      printf("Digite o %dº valor: ", i+1);
      scanf("%f", &valores[i]);

     /*
       valores[i] = rand(); // para testar o tempo
    */
    }

   // Medir o tempo de execução da ordenação
   inicio = clock();
   qsort(valores, n, sizeof(float), cmp);
   fim = clock();

   // Calcular o tempo decorrido em segundos
   tempo_decorrido = (double)(fim - inicio) / CLOCKS_PER_SEC;

   // Imprimir a lista ordenada e o tempo de execução
   printf("\nValores ordenados em ordem crescente:\n");
   for(i = 0; i < n; i++) {
      printf("%f ", valores[i]);
   }
   printf("\nTempo de execução da ordenação: %f segundos", tempo_decorrido);

   // Liberar a memória alocada para o array de valores
   free(valores);

   return 0;
}
