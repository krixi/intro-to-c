/**
 * CSCI 112 - Lab 6 Example
 * Marissa Joehler
 * 4/1/2016
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 80

// function prototypes
void get_input(char *);
void reverse(char *);



/**
 * Program main entry point
 */
int main(int argc, char * argv[])
{
    // Check for correct number of args
    if ( argc != 2 )
    {
        printf("ERROR: Please provide an integer greater than or equal to 0\n");
        return 0;
    }

    // Convert arg to int and check that it is within range
    int N = (int) strtol( argv[1], NULL, 10);
    if ( N < 0 )
    {
        printf("ERROR: Please provide an integer greater than or equal to 0\n");
        return 0;
    }

    char input[SIZE];
    int i;
    for ( i = 0; i < N; i++ )
    {
        get_input(input);
        reverse(input);
        printf("%s\n", input);
    }   
    
    return 0;
}



void get_input(char * input)
{
    fgets( input, SIZE, stdin );
    char * ptr = strchr(input, '\n');
    if ( ptr )
    {
        *ptr = '\0';
    }
}


void reverse(char * line)
{
    char copy[SIZE];
    char word[SIZE];
    memset(copy, 0, SIZE);

    int line_len = strlen(line);
    int word_len = 0;
    int i;
    for( i = line_len; i >= 0; --i )
    {
        if ( line[i] == ' ' && word_len > 0 )
        {
            memset(word, 0, SIZE);
            strncpy(word, line + i + 1, word_len);
            strcat( copy, word );
            strcat( copy, " ");
            word_len = 0;
        }
        else if ( isalnum( line[i] ) || line[i] == '\'' )
        {
            word_len++;
        }
    }

    if ( word_len > 0 )
    {
        memset(word, 0, SIZE);
        strncpy(word, line, word_len);
        strcat( copy, word );
    }

    strcpy( line, copy );
}








