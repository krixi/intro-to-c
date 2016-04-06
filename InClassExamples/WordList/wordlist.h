/**
 * Header file for wordlist program
 *
 */

#define WORD_SIZE 21
#define MAX_WORDS 15


typedef struct {
    char language[WORD_SIZE];
    int size;
    char words[MAX_WORDS][WORD_SIZE];
} wordlist_t;


// Function prototypes
void load_word_list( char * filename, wordlist_t * list );
void display_word_list( wordlist_t * list);

