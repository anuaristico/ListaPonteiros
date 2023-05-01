#include <stdio.h>
#include <stdlib.h>

void entrada_matriz(int x, int y, int **m);

int main() {
  int **a, **b, **c;
  int colunaA,colunaB,linhaA,linhaB;

  printf("Linhas e colunas da matriz A:");
  scanf("%d", &linhaA);
  scanf("%d", &colunaA);

  printf("Linhas e colunas da matriz B:");
  scanf("%d", &linhaB);
  scanf("%d", &colunaB);

  a = malloc(linhaA*sizeof(int));
  for (int i=0; i < linhaA; i++){   a[i] = malloc(colunaA * sizeof(int));}
  
  b = malloc(linhaB*sizeof(int));
  for(int j=0; j < linhaB; j++){    b[j] = malloc(colunaB * sizeof(int));}
  
  c = malloc(linhaA*sizeof(int));
  for(int k=0; k<linhaA; k++){      c[k] = malloc(colunaB * sizeof(int));}

  printf("Entre com o elementos de A\n");
  entrada_matriz (linhaA, colunaA, a);
  
  printf("Entre com o elementos de B\n");
  entrada_matriz (linhaB, colunaB, b);

    for( int i=0; i<linhaA; i++ ){
        for (int j=0; j<colunaB; j++){
            c[i][j] = a[i][j] + b[i][j];}
        
    }

  printf("Soma da Matriz A + Matriz B = Matriz C:\n");
  for(int i=0; i<linhaA; i++){
    for (int j=0; j<colunaB; j++){
      printf("%d ", c[i][j]);
    }printf("\n");
  }

  for(int i=0; i<linhaA; i++){free(a[i]);}
  free(a);
  
  for(int i=0; i<linhaB; i++){free(b[i]);}
  free(b);
  
  for(int i=0; i<linhaA; i++){free(c[i]);}
  free(c);
  
  return 0;
}

void entrada_matriz(int x, int y, int **m){
  for(int i=0; i<x; i++){
    for(int j=0; j<y; j++){
      printf("Digite o elemento %d%d da matriz\n", i+1, j+1);
      scanf("%d", &m[i][j]);
    }
  }
}