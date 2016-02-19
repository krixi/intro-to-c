
#include <stdio.h>


typedef enum {
    First,
    Second,
    Third
} example_t;



int main(void)
{
    
    example_t choice;

    printf("Enter an option > ");
    scanf("%u", &choice);

    switch( choice ) {
        case First:
            printf("First\n");
            break;
        case Second:
            printf("Second\n");
            break;
        case Third:
            printf("3rd\n");
            break;
    }
    printf("Choice = %d\n", choice);

    return 0;
}

