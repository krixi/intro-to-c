/*
 * This program introduces conditionals and control structures
 */

#include <stdio.h>


/*
 * This function returns true if the number is even, false if it is odd. 
 */
int isEvenNumber(int num)
{
   if( ( num % 2 ) == 0 )
   {
        return 1;
   }
   else
   {
        return 0;
   }
}

void test(int num)
{
    int is_even = isEvenNumber(num);
    if ( is_even )
    {
        printf("The number %d is EVEN \n", num );
    }
    else
    {
        printf("The number %d is ODD \n", num );
    } 
}


int main(void)
{
    test(0);
    test(1);
    test(2);
    test(3);
    test(4);
    test(5);
    test(-1);
    return 0;
}


