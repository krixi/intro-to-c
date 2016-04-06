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

    
    while ( fgets( line, LINE_SIZE, filep ) 
            && (word_count < MAX_WORDS) ) 
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
                if ( word_count < MAX_WORDS )
                {
                    strcpy( list->words[word_count], line );
                    word_count++;
                }
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
void display_word_list( const wordlist_t * list)
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

/**
 * Checks if a word is in the list
 */
int contains( const char * word, const wordlist_t * list )
{
    int i;
    for ( i=0; i < list->size; i++ )
    {
        //if ( word == list->words[i] ) // ERROR
        if ( 0 == strcmp( word, list->words[i] ) )
        {
            return 1;
        }
    }
    return 0;
}




void add_word( const char * word, wordlist_t * list )
{
    if ( list->size >= MAX_WORDS )
    {
        printf("List is full, %s not added\n", word);
        return;
    }

    if ( contains(word, list) )
    {
        return;
    }

    strcpy( list->words[ list->size ], word );
    list->size++;
}




int equal_lists( const wordlist_t * list1, const wordlist_t * list2)
{
    if ( list1->size != list2->size )
    {
       return 0; 
    }

    if ( strcmp( list1->language, list2->language ) != 0 )
    {
        return 0;
    }

    int i;
    for( i = 0; i < list1->size; i++ )
    {
        if ( !contains( list1->words[i], list2 ) )
        {
            return 0;
        }
    }

    return 1;
}








