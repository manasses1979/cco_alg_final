#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *x;
    x = (int *) malloc(sizeof(int) * 10);
    x[9] = 12;
    x[12] = 24;

    printf("%i\n",x[9]);
    printf("%i\n", x[12]);

    x = realloc(x, 10);
    x[12] = 24;
    printf("%i\n", x[12]);

    free(x);
    
    return 0;
}
