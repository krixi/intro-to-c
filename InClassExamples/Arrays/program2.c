
#include <stdio.h>

#define STACK_SIZE 25
#define STACK_EMPTY '~'

void push(char stack[], char item, int *top, int max_size)
{
    if ( *top < max_size-1 ) {
        ++(*top);
        stack[*top] = item;
    }
}

char pop( char stack[], int *top )
{
    char item;

    if ( *top >= 0 )
    {
        item = stack[ *top ];
        --( *top );
    } 
    else 
    {
        item = STACK_EMPTY;
    }

    return item;
}

void print_stack(char stack[], int *top)
{
    printf("There are %d elements in the stack\n", *top + 1);
    int i;
    for( i = 0; i <= *top; ++i )
    {
        printf("stack[%d] = %c \n", i, stack[i]);
    }
}

int main(void)
{
    char s[STACK_SIZE];
    int s_top = -1;

    // add an element to stack
    push( s, 'A', &s_top, STACK_SIZE);
    push( s, '+', &s_top, STACK_SIZE);
    push( s, 'Z', &s_top, STACK_SIZE);
    
    print_stack(s, &s_top);


    char item = pop(s, &s_top);

    printf(" item = %c \n", item);

    print_stack(s, &s_top);

    push( s, '@', &s_top, STACK_SIZE );

    print_stack( s, &s_top);

    return 0;
}


