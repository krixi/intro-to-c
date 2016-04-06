/**
 * wordlist implementation file
 *
 */

#include <stdio.h>
#include <string.h>
#include "wordlist.h"

#define LINE_SIZE 80

/**
 * Loads a word list from a file
 * @param filename The name of the file to load
 * @param list The list to populate
 */
void load_word_list( char * filename, wordlist_t * list )
{
    FILE * filep;
    char line[LINE_SIZE];
    int line_num = 0, word_count = 0;
    filep = fopen(filename, "r");

    
    while ( fgets( line, LINE_SIZE, filep ) ) 
    {
        // Get rid of the \n
        char * newline = strchr(line, '\n');
        if (newline) {
            *newline = '\0';
        }

        switch(line_num)
        {
            case 0:     // language
                strcpy( list->language, line);
                break;

            default:
                strcpy( list->words[word_count], line );
                word_count++;
                break;
        }
        line_num++;
    }
    list->size = word_count;
    
    fclose(filep);
}



/**
 * Prints out the wordlist
 * @param wordlist The list to print
 */
void display_word_list( wordlist_t * list)
{
    printf("----WORDLIST----\n");
    printf("Language: %s\n", list->language);
    printf("Size: %d\n", list->size);
    printf("\n");
    int i;
    for( i = 0; i < list->size; i++ )
    {
        printf("%s\n", list->words[i]);
    }
    printf("----------------\n");
}
