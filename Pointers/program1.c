/*
 * This file demonstrates pointers
 *
 * Pointers contain the memory address of the item they point to
 */
#include <stdio.h>

int main(void)
{
    // The following statement allocates 4 bytes of memory and stores the value '7' in that memory.  
    int num = 7;
    printf(" num = %d \n", num );

    // To create a pointer to the variable above, we use the type of the variable (int) with an asterisk *. 
    // The syntax '&num', with the ampersand before the variable, means 'the address of <variable name>'. 
    int * num_ptr = &num;
    printf(" num_ptr = 0x%x \n", num_ptr );

    // In order to extract the value from a pointer, you must 'dereference' the pointer. This is done with the * character. 
    printf("*num_ptr = %d \n", *num_ptr);

    // The compiler will halt with an error if you try to dereference a variable that is not a pointer
    //printf("*num = %d \n", *num); // COMPILER ERROR
    
    return 0;
}

