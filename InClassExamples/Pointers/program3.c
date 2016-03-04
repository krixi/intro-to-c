/**
 * Example: pointers of pointers
 * Marissa Joehler
 * 3/3/2016
 */

#include <stdio.h>



int main(void)
{

    // pointers to pointers
    int n = 7;
    int *np = &n; // np holds the address of n
    int **npp = &np; // npp holds the address of np

    printf("n = %d\n", n);
    printf("np = 0x%x, deferenced = %d\n", np, *np);
    printf("npp = 0x%x, dereferenced = 0x%x, dereferenced twice = %d\n", npp, *npp, **npp);

    return 0;
}

