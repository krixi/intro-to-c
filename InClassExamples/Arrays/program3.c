
#include <stdio.h>


void process(int x[], int n)
{
    x[0] = 21;
}

/*
int[] wontwork(void)
{
    
}
*/

int main(void)
{
    int x[7];

    process(x, 7);

    printf("The number of bytes in an integer is: %d\n", sizeof( int ) );

    int num_elements = sizeof( x ) / sizeof( int );

    printf("The max number of elements in x is: %d\n", num_elements);


    int *y[3];
    int a = 12;
    int b = 7;
    int c = -4;


    y[0] = &a;
    y[1] = &b;
    y[2] = &c;

    int i;
    for ( i=0; i < 3; ++i )
    {
        printf("y[%d] = 0x%x, dereferenced = %d\n", i, y[i], *y[i]);
    }


    return 0;
}


