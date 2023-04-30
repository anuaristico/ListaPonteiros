#include <stdio.h>
#include <stdlib.h>


int main(void){
    int i=5, *p;
    p = &i;
    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);
    return 0;
}

/* se o valor de i ocupar o valor 4094 na memória, a saída será de:
 0000FFE (4094 em decimal) 7 5 15 9. */

