#include <stdio.h>
#include <stdlib.h>

int main(void){
    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;
    f = vet; // Armazena os endereços de memória de vet
    printf("contador/valor/valor/endereco/endereco");
    for(i = 0 ; i <= 4 ; i++){
        printf("\ni = %d",i); // imprime o valor de i
        printf("vet[%d] = %.1f",i, vet[i]); // imprime o valor armazenado em v[i]
        printf("*(f + %d) = %.1f",i, *(f+i)); // Imprime os conteúdos dos endereços armazenados no ponteiro para inteiro f
        printf("&vet[%d] = %X",i, &vet[i]); // Imprime os endereços de cada item do vet
        printf("(f + %d) = %X",i, f+i); // Imprime os endereços armazenados no ponteiro para inteiro f
    }
    return 0;
}

/*Resultado:
contador/valor/valor/endereco/endereco
i = 0vet[0] = 1.1*(f + 0) = 1.1&vet[0] = 725FF8E0(f + 0) = 725FF8E0
i = 1vet[1] = 2.2*(f + 1) = 2.2&vet[1] = 725FF8E4(f + 1) = 725FF8E4
i = 2vet[2] = 3.3*(f + 2) = 3.3&vet[2] = 725FF8E8(f + 2) = 725FF8E8
i = 3vet[3] = 4.4*(f + 3) = 4.4&vet[3] = 725FF8EC(f + 3) = 725FF8EC
i = 4vet[4] = 5.5*(f + 4) = 5.5&vet[4] = 725FF8F0(f + 4) = 725FF8F0 */
