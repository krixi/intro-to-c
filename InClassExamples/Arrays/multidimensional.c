

#include <stdio.h>



void set(char tictac[3][3], int r, int c, char val)
{
    tictac[r][c] = val;
}

void print_board(char tictac[3][3])
{
    int r, c;
    for( r=0; r < 3; ++r )
    {
        printf("|");
        for( c=0; c < 3; ++c )
        {
            printf("%c", tictac[r][c] );
        }
        printf("|\n");
    }

    printf("\n\n");
}


int main(void)
{

    //char tictac[3][3];
    char tictac[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };
    
    // print the empty board
    print_board( tictac );

    set( tictac, 1, 1, 'X');

    print_board( tictac );
}

