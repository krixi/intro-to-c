/**
 * Header file for wordlist program
 *
 */
#ifndef WORDLIST_H
#define WORDLIST_H


#define WORD_SIZE 21
#define MAX_WORDS 10


typedef struct {
    char language[WORD_SIZE];
    int size;
    char words[MAX_WORDS][WORD_SIZE];
} wordlist_t;


// Function prototypes
void load_word_list( char * filename, wordlist_t * list );
void display_word_list( const wordlist_t * list);
int contains( const char * word, const wordlist_t * list );
void add_word( const char * word, wordlist_t * list );
int equal_lists( const wordlist_t * list1, const wordlist_t * list2);




#endif

