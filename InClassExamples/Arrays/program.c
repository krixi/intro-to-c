

#include <stdio.h>

#define SIZE 7

void fill_array(int * list, int n, int value)
{
    int i;
    for ( i = 0; i < n; ++i ) {
        list[i] = value;
        //*(list + i) = value;
    }
}



int main(void)
{
    int x[SIZE];
    int y[] = { 2, 3, 7, 11, 13, 17, 19 };
    int z[SIZE];



    int i;
    int start = 3;
    for ( i = 0; i < SIZE; ++i )
    {
        if ( i == 0 ) {
            x[i] = start;
        } else {
            x[i] = (x[i-1] +  x[i-1]);
        }
        printf(" x[%d] = %d \n", i, x[i]);
    }

    printf("\n");

    for ( i = 0; i < SIZE; ++i) {
        printf(" y[%d] = %d \n", i, y[i] );
    }    

    printf("\n");

    fill_array(z, SIZE, 27);
    for ( i = 0; i < SIZE; ++i) {
        printf(" z[%d] = %d \n", i, z[i] );
    }    

    return 0;
}
