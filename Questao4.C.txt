#include <stdio.h>
#include <stdlib.h>

int main() {
    int    valor;
    int   *p1;
    float  temp;
    float *p2;
    char   aux;
    char  *nome = "Ponteiros";
    char  *p3;
    int    idade;
    int    vetor[3];
    int   *p4;
    int   *p5;

    /* (a) */
    valor = 10;
    p1 = &valor; // Armazena o endereço da variável 'valor' no ponteiro p1
    *p1 = 20;
    printf("%d \n", valor);

    // Na letra a, o que está contido na variável valor foi alterado de 10 para 20, através do ponteiro p1.

    /* (b) */
    temp = 26.5;
    p2 = &temp; // Armazena o endereço da variável temp no ponteiro p2
    *p2 = 29.0; // Altera para 29.0 o valor dentro do espaço de memória endereçado por p2
    printf("%.1f \n", temp);

    // Na letra b, o que está contido na variável temp foi alterado de 26.5 para 29.0, através do ponteiro p2.

    /* (c) */
    p3 = &nome[0]; // Armazena o endereço do vetor nome[0] no ponteiro p3
    aux = *p3; // Variável aux recebe o conteúdo do ponteiro 'p3'
    printf("%c \n", aux);

    // Na letra c, foi impresso o valor contido na primeira posição do char nome, isto é, P.

    /* (d) */
    p3 = &nome[4]; // Armazena o endereço do vetor nome[4] no ponteiro p3
    aux = *p3; // Variável aux recebe o conteúdo do ponteiro p3.
    printf("%c \n", aux);

    // Na letra d, foi impresso o valor contido na quinta posição do char nome, isto é, e.


    /* (e) */
    p3 = nome;
    printf("%c \n", *p3);

    /* Na letra e, foi impresso apenas o valor contido na primeira posição do 'nome', isto é, P.
    Isso acontece porque ao não especificar a posição do vetor a ser acessada, a primeira posição é indicada */

    /* (f) */
    p3 = p3 + 4;
    printf("%c \n", *p3);

    /* Na letra f, somou-se quatro ao endereço inicial armazenado em p3, então o conteúdo impresso foi *nome[0+4], isto é, e */

    /* (g) */
    p3--;
    printf("%c \n", *p3);
    /* Na letra g, subtraiu-se uma posição da que foi somada anteriormente, então o conteúdo impresso foi *nome[0+4-1], isto é, t */


    /* (h) */
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor;
    idade = *p4;
    printf("%d \n", idade);

    /* Na letra h, foi impresso o primeiro valor do array vetor, pois p4 inicialmente aponta apenas para posição inicial de vetor */

    /* (i) */
    p5 = p4 + 1;
    idade = *p5;
    printf("%d \n", idade);

    /* Na letra i, foi impresso o segundo valor do array vetor, pois foi somado 1 ao endereço que p4 armazena */


    /* (j) */
    p4 = p5 + 1;
    idade = *p4;
    printf("%d \n", idade);

     /* Na letra j, foi impresso o terceiro valor do array vetor, pois foi novamente foi somado 1 ao endereço que p4 armazena */

    /* (l) */
    p4 = p4 - 2;
    idade = *p4;
    printf("%d \n", idade);

    /* Na letra l, foi impresso o primeiro valor do array vetor, pois foi subtraido 2 ao endereço que p4 armazena */

    /* (m) */
    p5 = &vetor[2] - 1;
    printf("%d \n", *p5);

    /* Na letra m, foi impresso o segundo valor do array vetor, pois foi requerido o endereço do terceiro elemento do array vetor menos um */

    /* (n) */
    p5++;
    printf("%d \n", *p5);

    /* Na letra n, foi impresso o terceiro valor do array vetor, pois foi incrementado um no valor anterior do endereço p5 */


    return(0);
}
