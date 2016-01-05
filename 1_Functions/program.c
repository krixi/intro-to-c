/*
 * This file contains a simple demonstration of functions.
 */
#include <stdio.h>

/*
 * Add two integers together
 */
int sum(int a, int b)
{
    int c = a + b;
    return c;
}


/*
 * Entry point into program. 
 */
int main(void)
{
    int first = 3;
    int second = 11;

    int result = sum(first, second);

    printf("%d + %d = %d \n", first, second, result);
    return 0;
}




