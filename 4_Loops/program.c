/*
 * This program introduces loops
 */

#include <stdio.h>

void runForLoop(int limit)
{
    printf("For loop to %d [ ", limit);
    for(int i=0; i<limit; i++)
    {
        printf("%d ", i);
    }
    printf("]\n");
}

void runWhileLoop(int limit)
{
    printf("While loop to %d [ ", limit);
    int i = 0;
    while( i<limit )
    {
        printf("%d ", i);

        /* Don't forget to increment the counter!! Otherwise, you'll be stuck in an infinite loop */
        i++;
    }
    printf("]\n");
}

void runDoWhileLoop(int limit)
{
    printf("Do-While loop to %d [ ", limit);
    int i = 0;
    do
    {
        printf("%d ", i);

        /* Don't forget to increment the counter!! Otherwise, you'll be stuck in an infinite loop */
        i++;
    } while( i<limit );
    printf("]\n");
}

void test(int limit)
{
    runForLoop(limit);
    runWhileLoop(limit);
    runDoWhileLoop(limit);
    printf("\n");
}


int main(void)
{
    test(5);
    test(2);
    test(0);
    return 0;
}


