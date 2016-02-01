/*
 * Marissa Joehler
 * CSCI 112 - Loops Example
 * 2/1/2016
 */

#include <stdio.h>

/*
 * Examples of counter-controlled while and for loops
 */
void counter_controlled_loop(void)
{
    int counter = 0;
    printf("While loop:\n");   
    while ( counter < 10 )
    {
        // do something
        printf(" counter = %d \n", counter);

        // increment the counter
        //counter = counter + 1;
        //counter += 1;
        //counter++;
        ++counter;
    }

    printf("For loop:\n");
    for (int i = 0; i <= 12; i++ ) {
        printf(" i = %d \n", i );
    }   
}

/*
 * Demonstration of the difference between --n and n--. 
 */
void prefix_vs_postfix(void)
{
    int n = 4;
    printf("Using prefix, n starts at %d\n", n);
    printf("%d\n", --n);
    printf("%d\n", n);
    
    n = 4;
    printf("Using postfix, n starts at %d\n", n);
    printf("%d\n", n--);
    printf("%d\n", n);
}


/*
 * Calculates the factorial of a given number, by using a loop that counts 
 * down to 1 from n
 * @param n The number to find the factorial of
 * @return The factorial of n    (n! in math terms). 
 */
int factorial(int n)
{
    int i, product;

    product = 1;
    for ( i = n; i > 1; --i )
    {
        // multiply the existing product by the value of i
        product *= i;
    }

    return product;
}


/*
 * Example of using a  while loop to get user input until a certain value is entered
 */
void loop_till_sentinal_value(void)
{
    int sentinal = 13, input;

    printf("Enter the number 13 to exit the following loop...\n");
    while ( input != sentinal )
    {
        printf("Enter a number > ");
        scanf("%d", &input);

        printf("You entered %d\n", input);
    }

}

/*
 * Example of getting user input, checking if it is within bounds, and 
 * prompting the user for input until it is, using a do-while loop.
 * @return The input integer that is greater than 0. 
 */
int get_input(void)
{
    int input;
    do {
        printf("Enter a number that is greater than 0 > ");
        scanf("%d", &input);

        if ( input <= 0 ) {
            printf("Invalid input\n");
        }
    } while ( input <= 0 );

    printf("The number you entered was %d\n", input);
    return input;
}

/*
 * Example of printing out the coordinates of a grid,
 * using a set of nested for loops.
 */
void nested_loops(void)
{
    int x, y, width = 3, height = 3;

    printf("nested loops example: %d x %d grid\n", width, height);
    for ( x = 0; x < width; x++ )
    {
        for ( y = 0; y < height; y++ )
        {
            printf("[%d,%d]", x, y);
        }
        printf("\n");
    }
}

/*
 * program execution starts here
 */
int main(void)
{
    // Call the functions that demonstrate the different examples. 
    counter_controlled_loop();

    prefix_vs_postfix();

    int fct = factorial(5);
    printf("factorial 5 = %d\n", fct);

    loop_till_sentinal_value();  

    int input = get_input();
    printf("input = %d (inside main function) \n", input);

    nested_loops(); 

    return 0;
}




