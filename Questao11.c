#include <stdio.h>
#include <stdlib.h>

int main(){
    char x1[4] = {"0000"};
    int x2[4] = {0,0,0,0};
    float x3[4] = {0,0,0,0};
    double x4[4] = {0,0,0,0};
    int i;

    for(i=0;i<4;i++){
        printf("Tipo char ->  x + %d = %p \n", i+1 , (x1+i));
    }
    for(i=0;i<4;i++){
        printf("Tipo int ->  x + %d = %p \n",i+1 , (x2+i));
    }
    for(i=0;i<4;i++){
        printf("Tipo float ->  x + %d = %p \n",i+1 , (x3+i));
    }
    for(i=0;i<4;i++){
        printf("Tipo double ->  x + %d = %p \n",i+1 , (x4+i));
    }
}

/* Pelas respostas dadas pelo meu computador, uma variável char ocupa 1 byte na memória, int ocupa 4 bytes, float ocupa 4 bytes e double ocupa 8 bytes.
No entanto, esse programa também funcionaria para a máquina da questão anterior, mas fornceria uma resposta diferente.  */
