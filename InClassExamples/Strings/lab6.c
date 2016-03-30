
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define SIZE 80


int main(int argc, char * argv[])
{

    if ( argc != 2 )
    {
        printf("ERROR: Please provide an integer greater than or equal to 0\n");
        return 0;
    }

    int N = (int) strtol( argv[1], NULL, 10);
    printf("N = %d\n", N);


    char input[SIZE];
    if ( fgets( input, SIZE, stdin ) )
    {
        printf(" input = %s\n", input);
    }
    
    return 0;
}

