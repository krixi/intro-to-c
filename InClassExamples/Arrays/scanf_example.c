/**
 * Scanf example
 * Marissa Joehler
 * 3/4/2016
 */
#include <stdio.h>

#define SIZE 4

void scan_one_line(void)
{
    int x[SIZE];

    printf("Enter 4 digits separated by spaces >\n");
    scanf("%d %d %d %d", &x[0], &x[1], &x[2], &x[3]);
    printf("\n");

    int i;
    for( i = 0; i < SIZE; ++i )
    {
        printf("x[%d] = %d\n", i, x[i]);
    }

}

void scan_for_loop(void)
{
    int x[SIZE];
    printf("Enter 4 digits separated by spaces >\n");
    int i;
    for( i = 0; i < SIZE; ++i )
    {
        scanf("%d", &x[i]);
    }

    printf("\n");
    for( i = 0; i < SIZE; ++i )
    {
        printf("x[%d] = %d\n", i, x[i]);
    }
}


int main(void)
{
    //scan_one_line();
    scan_for_loop();
    return 0;
}
