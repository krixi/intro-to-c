

#include <stdio.h>
#include "wordlist.h"


int main(void)
{
    wordlist_t list;
    load_word_list("data.txt", &list);
    display_word_list( &list );

    int has_test = contains("test", &list);
    printf("list contains 'test' = %d\n", has_test);
    int has_apple = contains("apple", &list);
    printf("list contains 'apple' = %d\n", has_apple);

    add_word("apple", &list);

    add_word("this", &list);

    display_word_list(&list);

    wordlist_t list2;
    load_word_list("data2.txt", &list2);
    
    int are_equal = equal_lists( &list, &list2 );
    printf("lists are equal = %d\n", are_equal );


    add_word("apple", &list2);
    are_equal = equal_lists( &list, &list2 );
    printf("lists are equal = %d\n", are_equal );


    return 0;
}

