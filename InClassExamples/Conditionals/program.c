/*
 * Examples of conditions and selection structures in C
 * Marissa Joehler
 * CSCI 112 
 * 1/27/2016
 */
#include <stdio.h>


/* Define constants to use in this example */
#define LIMIT 999

void test_assignment(void)
{
    int x, y = -1;

    x = ( y == 10);
    printf("x = %d, y= %d \n", x, y);

    x = ( y = 10);
    printf("x = %d, y= %d \n", x, y);
}


/* Main program entry point */
int main(void)
{
    /* Declare variables to use in this example */
    int result;
    int x = 312, y = -2, flag = 0;

    test_assignment();

    /* First print out the variables in use */
    printf("x = %d, y = %d, flag = %d, LIMIT = %d\n\n", x, y, flag, LIMIT);

    printf("Relational operators: \n");
    /* Examples of relational operators */
    result = ( x > y );
    printf("x > y -> result = %d \n", result);

    result = ( y < LIMIT );
    printf("y < LIMIT -> result = %d \n", result);
    
    result = ( y >= LIMIT );
    printf("y >= LIMIT -> result = %d \n", result);
    
    result = ( x <= LIMIT );
    printf("x <= LIMIT -> result = %d \n", result);
    
    printf("\nEquality operators: \n");
    /* Examples of equality operators */
    result = ( y == LIMIT );
    printf("y == LIMIT -> result = %d \n", result);

    result = ( y != x );
    printf("y != x -> result = %d \n", result);


    printf("\nLogic operators: \n");
    /* Examples of logic operators, used to make complex conditions */
    result =  x != y || y > 0.0 && x > LIMIT;
    printf("x != y || y > 0.0 && x > LIMIT -> result = %d \n", result);
    
    result =  (x != y || y > 0.0) && x > LIMIT;
    printf("(x != y || y > 0.0 ) && x > LIMIT  -> result = %d \n", result);

    /*
     * The operator ! (not) returns what is called the 'compliment' or 'negation' of the expression
     * that it preceeds. All that means is that it returns exactly the opposite of the expression,
     * turning a true result into a false, and false into true. 
     */
    result = (  x == y  );
    printf("x == y -> result = %d \n", result);
    result = ( !( x == y ) );
    printf("!( x == y ) -> result = %d \n", result);
 
    /* Take this condition for example:
     *     x > 0
     * To get the compliment of a relational operator, you have two options.
     * 1) Use the relational operator that will return true for all values that this one returns false.
     *      x <= 0
     * 2) Use the ! operator
     *      !( x > 0 )
     */




    printf("\nFinding the complement of a complex condition: \n");
    /* 
     * De-morgan's theorem: How to find the complement of a complex condition
     */ 
    /* Example complex condition using && operator */
    result = x > 0 && y < 0;
    printf("x > 0 && y < 0 -> result = %d\n", result);
    /* The complement of this is: */
    result = x <= 0 || y >= 0;
    printf("x <= 0 || y >= 0 -> result = %d\n", result);


    /* example complex condition using || operator */
    result = x < 0 || y < 0;
    printf("x < 0 || y < 0 -> result = %d\n", result);
    /* The complement of this is: */
    result = x >= 0 && y >= 0;
    printf("x >= 0 && y >= 0 -> result = %d\n", result);


    printf("\nShort-circuit evaluation: \n");
    /* Example of short-circuit evaluation with an && operator */
    result = ( flag && ( x > y ) );
    printf("flag && ( x > y ) -> result = %d \n", result);
   
    /* Example of short-circuit evaluation with an || operator */
    result = ( !flag || ( x < y ) );
    printf("!flag || ( x < y ) -> result = %d \n", result);




    printf("\nComparing characers: \n");
    /* Examples of comparing characters */
    char ex1 = '!';

    /* comparing lowercase characters works as expected */
    result = ( 'a' < 'b' );
    printf("a < b -> %d\n", result);
    

    /* Comparing upper case to lower case doesn't */
    result = ( 'a' < 'A' );
    printf("a < A -> %d\n", result);

    /* How to tell if a character is a letter */ 
    result = ( 'A' <= ex1 && ex1 <= 'Z' ) || ( 'a' <= ex1 && ex1 <= 'z');
    printf("%c is a letter -> %d\n", ex1,  result);




    printf("\nif statements: \n");
    /* IF statement examples */
    // single alternative
    if ( x > y ) {
        printf("x is greater than y\n");
    }

    // two alternatives
    if ( x > LIMIT ) {
        printf("x is greater than LIMIT\n");

    } else {
        printf("x is less than LIMIT\n");

        // if statements can be nested
        if ( y < 0.0 ) {
            printf("y is less than zero\n");
        } else {
            printf("y is greater than zero\n");
        }
    }

    // multiple alternatives
    if ( x == y ) {
        printf("x == y\n");

    } else if ( x == LIMIT ) {
        printf("x == LIMIT\n");

    } else if ( y > 0.0 ) {
        printf("y > 0.0\n");

    } else {
        printf("none of the above\n");
    }



    /* ERROR: THE FOLLOWING CODE HAS FAULTY LOGIC! 
     * Since x = 312 which is less than 350, you might expect 'less than 350' to get printed out here, but it doesn't
     * because 312 is also less than 500, and becuase that statement comes first, it gets printed instead.
     */ 
    if ( x <= 500 ) {
        printf("less than 500\n");
    } else if ( x <= 350 ) {
        printf("less than 350\n");
    }

    /* this is the correct way to write the above statement */
    if ( x <= 350 ) {
        printf("less than 350\n");
    } else if ( x <= 500 ) {
        printf("less than 500\n");
    }





    printf("\nswitch statements: \n");
    /* SWITCH statement */
    switch( x )
    {
        case 1:
        case 2:
            printf("x was 1 or 2\n");
            break;

        default:
            printf("x was not 1 or 2\n");
            break;
    }


    /* You can switch on an int or a char */
    switch ( ex1 ) {
        case 'A':
        case 'B':
        case 'G':
        {
            printf("I was expecting the letter %c \n", ex1);
        }
        break;


        default:
            printf("Not sure what to do with %c \n", ex1 );
            break;
    }
    

    return (0);
}


