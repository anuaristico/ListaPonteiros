#include <stdio.h>
#include <stdlib.h>

int dobro (int x) {
    return 2*x;
}


int main(void) {
    int (*pdobro) (int);
    pdobro = &dobro;
    int x = 10, *px = &x;
    printf("valor de 4x = %d", dobro(pdobro(*px)));
}

/* A definição de função é um pedaço de código que faz alguma tarefa específica e pode ser chamado de qualquer
parte do programa quantas vezes desejarmos. Um ponteiro para função armazena o endereço de uma área do código, ou seja, assim
como nos ponteiros para variáveis, podemos declarar ponteiros e fazer apontar para alguma função,
de modo que, por exemplo, uma função possa vir a ser parâmetro de outra ou da mesma, como aconteceu acima. */
