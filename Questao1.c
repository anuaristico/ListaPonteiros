#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i=3,j=5;
    int *p, *q;
    p = &i;
    q = &j;

    printf("%d %d %d %d", p == &i, *p - *q, **&p, 3 - *p/(*q) + 7);

    // O resultado impresso foi: 1 -2 3 10

    return 0;
}
