

#include <stdio.h>
#include "wordlist.h"


int main(void)
{
    wordlist_t list;
    load_word_list("data.txt", &list);
    display_word_list( &list );

    return 0;
}
