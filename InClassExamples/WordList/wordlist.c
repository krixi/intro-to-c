/**
 * wordlist implementation file
 *
 */

#include <stdio.h>
#include "wordlist.h"

#define LINE_SIZE 80


int load_word_list( char * filename, wordlist_t * list )
{
    FILE * filep;
    char line[LINE_SIZE];
    filep = fopen(filename, "r");

    while ( fgets( line, LINE_SIZE, filep ) ) {
        printf("line = %s\n", line);
    }
    
    fclose(filep);
    return 1;
}

